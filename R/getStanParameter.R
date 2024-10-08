# Copyright 2024 Google LLC

# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at

#     https://www.apache.org/licenses/LICENSE-2.0

# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#' Extracts parameter from Stan model.
#' @param fit A Stan fit model.
#' @param par Name of the parameter you want to extract.
#' @return A long tibble with draws for the pamete.
#' @export
#'
getStanParameter <- function(fit, par) {
  par <- rlang::enquo(par)
  long_tlb <- fit |>
    as.data.frame(pars = rlang::quo_text(par)) |>
    dplyr::mutate(draw = seq_len(dplyr::n())) |>
    tidyr::pivot_longer(
      names_to = "idx",
      values_to = rlang::quo_text(par), -draw
    ) |>
    dplyr::mutate(idx = as.numeric(gsub(
      glue::glue("{rlang::quo_text(par)}\\[(\\d+)\\]"),
      "\\1",
      idx
    ))) |>
    dplyr::as_tibble()
  return(long_tlb)
}
