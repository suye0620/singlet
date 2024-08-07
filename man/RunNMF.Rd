% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RunNMF.R
\name{RunNMF.Seurat}
\alias{RunNMF.Seurat}
\alias{RunNMF}
\alias{RunNMF.SingleCellExperiment}
\title{Run NMF on a Seurat object}
\usage{
\method{RunNMF}{Seurat}(
  object,
  split.by = NULL,
  k = NULL,
  assay = NULL,
  reps = 3,
  tol = 1e-05,
  L1 = 0.01,
  L2 = 0,
  verbose = 2,
  reduction.name = "nmf",
  reduction.key = "NMF_",
  maxit = 100,
  test.set.density = 0.05,
  learning.rate = 0.8,
  tol.overfit = 1e-04,
  trace.test.mse = 5,
  threads = 0,
  features = NULL,
  ...
)

RunNMF(object, ...)

\method{RunNMF}{SingleCellExperiment}(
  object,
  split.by = NULL,
  k = NULL,
  assay = NULL,
  reps = 3,
  tol = 1e-05,
  L1 = 0.01,
  L2 = 0,
  verbose = 2,
  reduction.name = "nmf",
  reduction.key = "NMF_",
  maxit = 100,
  test.set.density = 0.05,
  learning.rate = 0.8,
  tol.overfit = 1e-04,
  trace.test.mse = 5,
  threads = 0,
  features = NULL,
  ...
)
}
\arguments{
\item{object}{A Seurat or SingleCellExperiment object}

\item{split.by}{column name in \code{colData} giving a \code{factor} with multiple levels for splitting. Data will be weighted such that each level in the factor contributes equally to the NMF model.}

\item{k}{either \code{NULL} for automatic rank determination, a single integer giving the desired rank, or a vector of ranks to use for cross-validation.}

\item{assay}{Assay to use, defaults to logcounts}

\item{reps}{number of replicates for cross-validation}

\item{tol}{tolerance of the fit (correlation distance of the model across consecutive iterations). Cross-validation fits are 10x coarser than this tolerance.}

\item{L1}{L1/LASSO penalty to increase sparsity of the model}

\item{L2}{L2/Ridge-like penalty to increase angles between factors}

\item{verbose}{Level of console output (0/FALSE, 1/TRUE, 2)}

\item{reduction.name}{Name to store resulting DimReduc object as ("NMF")}

\item{reduction.key}{Key for resulting DimReduc ("NMF")}

\item{maxit}{maximum number of fitting iterations}

\item{test.set.density}{approximate density of the test set (default 0.05)}

\item{learning.rate}{exponent on step size for automatic rank determination}

\item{tol.overfit}{tolerance for increase in test set reconstruction error relative to minimum observed value during fitting}

\item{trace.test.mse}{during automatic rank determination, calculate test set reconstruction error every trace iterations}

\item{threads}{number of threads to use (0 = let OpenMP use all available threads)}

\item{features}{unused for this method}

\item{...}{not implemented}
}
\value{
Returns a Seurat object with the NMF model stored in the reductions slot

Returns an SCE with the NMF model stored in reducedDim
}
\description{
Run Non-negative Matrix Factorization with rank determined by CV

Run Non-negative Matrix Factorization with rank determined by CV
}
\details{
Use \code{set.seed()} to guarantee reproducibility!

Use \code{set.seed()} to guarantee reproducibility!
}
\examples{
\dontrun{
get_pbmc3k_data() \%>\%
  NormalizeData() \%>\%
  RunNMF() -> pbmc3k
}
}
\seealso{
\code{\link{RankPlot}}, \code{\link{MetadataSummary}}
}
