% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/credibleInterval.R
\name{credibleInterval}
\alias{credibleInterval}
\title{Calculate credible interval from MCMC draws}
\usage{
credibleInterval(draws, width)
}
\arguments{
\item{draws}{A numeric vector containing MCMC draws.}

\item{width}{A numeric value between 0 and 1 specifying the desired
width of the credible interval.}
}
\value{
A named list containing three elements:
\itemize{
\item width: The specified width of the credible interval.
\item lower_bound: The lower bound of the credible interval.
\item upper_bound: The upper bound of the credible interval.
}
}
\description{
This function calculates a credible interval of the specified
width from a vector of MCMC draws.
}
\details{
The function calculates the lower and upper bounds of the
credible interval using the quantile function based on the
specified width.
}
\examples{
# Generate example draws
draws <- rnorm(1000)

# Calculate 95\% credible interval
credibleInterval(draws, width = 0.95)

}
