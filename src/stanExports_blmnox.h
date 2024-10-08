// Generated by rstantools.  Do not edit by hand.

/*
    im is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    im is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with im.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model_blmnox_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 34> locations_array__ =
  {" (found before start of program)",
  " (in 'blmnox', line 37, column 2 to column 22)",
  " (in 'blmnox', line 39, column 2 to column 11)",
  " (in 'blmnox', line 41, column 2 to column 13)",
  " (in 'blmnox', line 55, column 2 to column 18)",
  " (in 'blmnox', line 57, column 2 to column 18)",
  " (in 'blmnox', line 59, column 2 to column 19)",
  " (in 'blmnox', line 61, column 2 to column 26)",
  " (in 'blmnox', line 63, column 4 to column 72)",
  " (in 'blmnox', line 64, column 4 to column 62)",
  " (in 'blmnox', line 65, column 4 to column 57)",
  " (in 'blmnox', line 62, column 17 to line 66, column 3)",
  " (in 'blmnox', line 62, column 2 to line 66, column 3)",
  " (in 'blmnox', line 45, column 2 to column 23)",
  " (in 'blmnox', line 46, column 2 to column 33)",
  " (in 'blmnox', line 47, column 2 to column 23)",
  " (in 'blmnox', line 50, column 4 to column 60)",
  " (in 'blmnox', line 49, column 25 to line 51, column 3)",
  " (in 'blmnox', line 49, column 2 to line 51, column 3)",
  " (in 'blmnox', line 15, column 2 to column 17)",
  " (in 'blmnox', line 17, column 9 to column 10)",
  " (in 'blmnox', line 17, column 2 to column 14)",
  " (in 'blmnox', line 19, column 9 to column 10)",
  " (in 'blmnox', line 19, column 2 to column 18)",
  " (in 'blmnox', line 21, column 2 to column 16)",
  " (in 'blmnox', line 23, column 2 to column 23)",
  " (in 'blmnox', line 25, column 2 to column 39)",
  " (in 'blmnox', line 29, column 2 to column 24)",
  " (in 'blmnox', line 31, column 2 to column 20)",
  " (in 'blmnox', line 33, column 9 to column 10)",
  " (in 'blmnox', line 33, column 2 to column 40)",
  " (in 'blmnox', line 55, column 9 to column 10)",
  " (in 'blmnox', line 57, column 9 to column 10)",
  " (in 'blmnox', line 59, column 9 to column 10)"};
#include <stan_meta_header.hpp>
class model_blmnox final : public model_base_crtp<model_blmnox> {
private:
  int N;
  Eigen::Matrix<double,-1,1> y_data__;
  Eigen::Matrix<double,-1,1> treat_data__;
  double eta_mean;
  double eta_sd;
  int run_estimation;
  double mean_y;
  double sd_y;
  Eigen::Matrix<double,-1,1> y_std_data__;
  Eigen::Map<Eigen::Matrix<double,-1,1>> y{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> treat{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> y_std{nullptr, 0};
public:
  ~model_blmnox() {}
  model_blmnox(stan::io::var_context& context__, unsigned int
               random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model_blmnox_namespace::model_blmnox";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 19;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 19;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 19;
      stan::math::check_greater_or_equal(function__, "N", N, 1);
      current_statement__ = 20;
      stan::math::validate_non_negative_index("y", "N", N);
      current_statement__ = 21;
      context__.validate_dims("data initialization", "y", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      y_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                   std::numeric_limits<double>::quiet_NaN());
      new (&y) Eigen::Map<Eigen::Matrix<double,-1,1>>(y_data__.data(), N);
      {
        std::vector<local_scalar_t__> y_flat__;
        current_statement__ = 21;
        y_flat__ = context__.vals_r("y");
        current_statement__ = 21;
        pos__ = 1;
        current_statement__ = 21;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 21;
          stan::model::assign(y, y_flat__[(pos__ - 1)],
            "assigning variable y", stan::model::index_uni(sym1__));
          current_statement__ = 21;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 22;
      stan::math::validate_non_negative_index("treat", "N", N);
      current_statement__ = 23;
      context__.validate_dims("data initialization", "treat", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      treat_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                       std::numeric_limits<double>::quiet_NaN());
      new (&treat)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(treat_data__.data(), N);
      {
        std::vector<local_scalar_t__> treat_flat__;
        current_statement__ = 23;
        treat_flat__ = context__.vals_r("treat");
        current_statement__ = 23;
        pos__ = 1;
        current_statement__ = 23;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 23;
          stan::model::assign(treat, treat_flat__[(pos__ - 1)],
            "assigning variable treat", stan::model::index_uni(sym1__));
          current_statement__ = 23;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 24;
      context__.validate_dims("data initialization", "eta_mean", "double",
        std::vector<size_t>{});
      eta_mean = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 24;
      eta_mean = context__.vals_r("eta_mean")[(1 - 1)];
      current_statement__ = 25;
      context__.validate_dims("data initialization", "eta_sd", "double",
        std::vector<size_t>{});
      eta_sd = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 25;
      eta_sd = context__.vals_r("eta_sd")[(1 - 1)];
      current_statement__ = 25;
      stan::math::check_greater_or_equal(function__, "eta_sd", eta_sd, 0);
      current_statement__ = 26;
      context__.validate_dims("data initialization", "run_estimation", "int",
        std::vector<size_t>{});
      run_estimation = std::numeric_limits<int>::min();
      current_statement__ = 26;
      run_estimation = context__.vals_i("run_estimation")[(1 - 1)];
      current_statement__ = 26;
      stan::math::check_greater_or_equal(function__, "run_estimation",
        run_estimation, 0);
      current_statement__ = 26;
      stan::math::check_less_or_equal(function__, "run_estimation",
        run_estimation, 1);
      current_statement__ = 27;
      mean_y = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 27;
      mean_y = stan::math::mean(y);
      current_statement__ = 28;
      sd_y = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 28;
      sd_y = stan::math::sd(y);
      current_statement__ = 29;
      stan::math::validate_non_negative_index("y_std", "N", N);
      current_statement__ = 30;
      y_std_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                       std::numeric_limits<double>::quiet_NaN());
      new (&y_std)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(y_std_data__.data(), N);
      current_statement__ = 30;
      stan::model::assign(y_std,
        stan::math::divide(stan::math::subtract(y, mean_y), sd_y),
        "assigning variable y_std");
      current_statement__ = 31;
      stan::math::validate_non_negative_index("y_sim", "N", N);
      current_statement__ = 32;
      stan::math::validate_non_negative_index("y_one", "N", N);
      current_statement__ = 33;
      stan::math::validate_non_negative_index("y_zero", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1;
  }
  inline std::string model_name() const final {
    return "model_blmnox";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --allow-undefined"};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ =
      "model_blmnox_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 1;
      sigma = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      local_scalar_t__ eta = DUMMY_VAR__;
      current_statement__ = 2;
      eta = in__.template read<local_scalar_t__>();
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 3;
      alpha = in__.template read<local_scalar_t__>();
      {
        current_statement__ = 13;
        lp_accum__.add(stan::math::std_normal_lpdf<propto__>(alpha));
        current_statement__ = 14;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(eta, eta_mean,
                         eta_sd));
        current_statement__ = 15;
        lp_accum__.add(stan::math::std_normal_lpdf<propto__>(sigma));
        current_statement__ = 18;
        if (stan::math::logical_eq(run_estimation, 1)) {
          current_statement__ = 16;
          lp_accum__.add(stan::math::normal_lpdf<false>(y_std,
                           stan::math::add(stan::math::multiply(eta, treat),
                             alpha), sigma));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "model_blmnox_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      sigma = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      double eta = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      eta = in__.template read<local_scalar_t__>();
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      alpha = in__.template read<local_scalar_t__>();
      out__.write(sigma);
      out__.write(eta);
      out__.write(alpha);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      Eigen::Matrix<double,-1,1> y_sim =
        Eigen::Matrix<double,-1,1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,1> y_one =
        Eigen::Matrix<double,-1,1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,1> y_zero =
        Eigen::Matrix<double,-1,1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      double eta_rsc = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 7;
      eta_rsc = (eta * sd_y);
      current_statement__ = 12;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 8;
        stan::model::assign(y_sim,
          ((stan::math::normal_rng(((eta *
              stan::model::rvalue(treat, "treat", stan::model::index_uni(i)))
              + alpha), sigma, base_rng__) * sd_y) + mean_y),
          "assigning variable y_sim", stan::model::index_uni(i));
        current_statement__ = 9;
        stan::model::assign(y_one,
          ((stan::math::normal_rng((eta + alpha), sigma, base_rng__) * sd_y)
          + mean_y), "assigning variable y_one", stan::model::index_uni(i));
        current_statement__ = 10;
        stan::model::assign(y_zero,
          ((stan::math::normal_rng(alpha, sigma, base_rng__) * sd_y) +
          mean_y), "assigning variable y_zero", stan::model::index_uni(i));
      }
      out__.write(y_sim);
      out__.write(y_one);
      out__.write(y_zero);
      out__.write(eta_rsc);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 1;
      sigma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma);
      local_scalar_t__ eta = DUMMY_VAR__;
      current_statement__ = 2;
      eta = in__.read<local_scalar_t__>();
      out__.write(eta);
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 3;
      alpha = in__.read<local_scalar_t__>();
      out__.write(alpha);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      current_statement__ = 1;
      context__.validate_dims("parameter initialization", "sigma", "double",
        std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "eta", "double",
        std::vector<size_t>{});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "alpha", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 1;
      sigma = context__.vals_r("sigma")[(1 - 1)];
      out__.write_free_lb(0, sigma);
      local_scalar_t__ eta = DUMMY_VAR__;
      current_statement__ = 2;
      eta = context__.vals_r("eta")[(1 - 1)];
      out__.write(eta);
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 3;
      alpha = context__.vals_r("alpha")[(1 - 1)];
      out__.write(alpha);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"sigma", "eta", "alpha"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"y_sim", "y_one", "y_zero", "eta_rsc"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{}, std::vector<size_t>{}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(N)},
             std::vector<size_t>{static_cast<size_t>(N)},
             std::vector<size_t>{static_cast<size_t>(N)},
             std::vector<size_t>{}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "sigma");
    param_names__.emplace_back(std::string() + "eta");
    param_names__.emplace_back(std::string() + "alpha");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_sim" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_one" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_zero" + '.' +
          std::to_string(sym1__));
      }
      param_names__.emplace_back(std::string() + "eta_rsc");
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "sigma");
    param_names__.emplace_back(std::string() + "eta");
    param_names__.emplace_back(std::string() + "alpha");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_sim" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_one" + '.' +
          std::to_string(sym1__));
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        param_names__.emplace_back(std::string() + "y_zero" + '.' +
          std::to_string(sym1__));
      }
      param_names__.emplace_back(std::string() + "eta_rsc");
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"eta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_sim\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_one\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_zero\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"eta_rsc\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"eta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_sim\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_one\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_zero\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"eta_rsc\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((1 + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * ((((N + N)
      + N) + 1));
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((1 + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * ((((N + N)
      + N) + 1));
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = model_blmnox_namespace::model_blmnox;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_blmnox_namespace::profiles__;
}
#endif
#endif
