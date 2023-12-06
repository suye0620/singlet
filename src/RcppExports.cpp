// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/singlet.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// weight_by_split
Rcpp::S4 weight_by_split(const Rcpp::S4& A_, Rcpp::IntegerVector split_by, const size_t n_groups);
RcppExport SEXP _singlet_weight_by_split(SEXP A_SEXP, SEXP split_bySEXP, SEXP n_groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type A_(A_SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type split_by(split_bySEXP);
    Rcpp::traits::input_parameter< const size_t >::type n_groups(n_groupsSEXP);
    rcpp_result_gen = Rcpp::wrap(weight_by_split(A_, split_by, n_groups));
    return rcpp_result_gen;
END_RCPP
}
// rowwise_compress_sparse
Rcpp::NumericMatrix rowwise_compress_sparse(Rcpp::SparseMatrix& A, const size_t n, const size_t threads);
RcppExport SEXP _singlet_rowwise_compress_sparse(SEXP ASEXP, SEXP nSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< const size_t >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(rowwise_compress_sparse(A, n, threads));
    return rcpp_result_gen;
END_RCPP
}
// rowwise_compress_dense
Rcpp::NumericMatrix rowwise_compress_dense(Rcpp::NumericMatrix& A, const size_t n, const size_t threads);
RcppExport SEXP _singlet_rowwise_compress_dense(SEXP ASEXP, SEXP nSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< const size_t >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(rowwise_compress_dense(A, n, threads));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_predict
Eigen::MatrixXd Rcpp_predict(Rcpp::SparseMatrix A, Eigen::MatrixXd w, const double L1, const double L2, const int threads);
RcppExport SEXP _singlet_Rcpp_predict(SEXP ASEXP, SEXP wSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_predict(A, w, L1, L2, threads));
    return rcpp_result_gen;
END_RCPP
}
// c_project_model
Rcpp::List c_project_model(Rcpp::SparseMatrix A, Eigen::MatrixXd w, const double L1, const double L2, const int threads);
RcppExport SEXP _singlet_c_project_model(SEXP ASEXP, SEXP wSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(c_project_model(A, w, L1, L2, threads));
    return rcpp_result_gen;
END_RCPP
}
// c_nmf
Rcpp::List c_nmf(Rcpp::SparseMatrix& A, Rcpp::SparseMatrix& At, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w);
RcppExport SEXP _singlet_c_nmf(SEXP ASEXP, SEXP AtSEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type At(AtSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(c_nmf(A, At, tol, maxit, verbose, L1, L2, threads, w));
    return rcpp_result_gen;
END_RCPP
}
// c_nmf_sparse_list
Rcpp::List c_nmf_sparse_list(Rcpp::List A_, Rcpp::List& At_, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w);
RcppExport SEXP _singlet_c_nmf_sparse_list(SEXP A_SEXP, SEXP At_SEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type A_(A_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type At_(At_SEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(c_nmf_sparse_list(A_, At_, tol, maxit, verbose, L1, L2, threads, w));
    return rcpp_result_gen;
END_RCPP
}
// write_IVCSC
bool write_IVCSC(Rcpp::List& L, const bool verbose);
RcppExport SEXP _singlet_write_IVCSC(SEXP LSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(write_IVCSC(L, verbose));
    return rcpp_result_gen;
END_RCPP
}
// save_IVSparse
bool save_IVSparse(Rcpp::List A_, bool verbose);
RcppExport SEXP _singlet_save_IVSparse(SEXP A_SEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type A_(A_SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(save_IVSparse(A_, verbose));
    return rcpp_result_gen;
END_RCPP
}
// build_IVCSC2
bool build_IVCSC2(Rcpp::List& L, const bool verbose);
RcppExport SEXP _singlet_build_IVCSC2(SEXP LSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(build_IVCSC2(L, verbose));
    return rcpp_result_gen;
END_RCPP
}
// read_IVSparse
Eigen::SparseMatrix<float> read_IVSparse();
RcppExport SEXP _singlet_read_IVSparse() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(read_IVSparse());
    return rcpp_result_gen;
END_RCPP
}
// run_nmf_on_sparsematrix_list
Rcpp::List run_nmf_on_sparsematrix_list(Rcpp::List A_, const double tol, const uint16_t maxit, const bool verbose, const uint16_t threads, Eigen::MatrixXd w, bool use_vcsc, const double L1, const double L2);
RcppExport SEXP _singlet_run_nmf_on_sparsematrix_list(SEXP A_SEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP threadsSEXP, SEXP wSEXP, SEXP use_vcscSEXP, SEXP L1SEXP, SEXP L2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type A_(A_SEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< bool >::type use_vcsc(use_vcscSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    rcpp_result_gen = Rcpp::wrap(run_nmf_on_sparsematrix_list(A_, tol, maxit, verbose, threads, w, use_vcsc, L1, L2));
    return rcpp_result_gen;
END_RCPP
}
// c_mu_nmf
Rcpp::List c_mu_nmf(Rcpp::SparseMatrix& A, Rcpp::SparseMatrix& At, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w);
RcppExport SEXP _singlet_c_mu_nmf(SEXP ASEXP, SEXP AtSEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type At(AtSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(c_mu_nmf(A, At, tol, maxit, verbose, L1, L2, threads, w));
    return rcpp_result_gen;
END_RCPP
}
// c_nmf_dense
Rcpp::List c_nmf_dense(Eigen::MatrixXd& A, Eigen::MatrixXd& At, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w);
RcppExport SEXP _singlet_c_nmf_dense(SEXP ASEXP, SEXP AtSEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type At(AtSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(c_nmf_dense(A, At, tol, maxit, verbose, L1, L2, threads, w));
    return rcpp_result_gen;
END_RCPP
}
// c_linked_nmf
Rcpp::List c_linked_nmf(Rcpp::SparseMatrix A, Rcpp::SparseMatrix At, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w, Eigen::MatrixXd link_h, Eigen::MatrixXd link_w);
RcppExport SEXP _singlet_c_linked_nmf(SEXP ASEXP, SEXP AtSEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP, SEXP link_hSEXP, SEXP link_wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix >::type At(AtSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type link_h(link_hSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type link_w(link_wSEXP);
    rcpp_result_gen = Rcpp::wrap(c_linked_nmf(A, At, tol, maxit, verbose, L1, L2, threads, w, link_h, link_w));
    return rcpp_result_gen;
END_RCPP
}
// c_ard_nmf
Rcpp::List c_ard_nmf(Rcpp::SparseMatrix& A, Rcpp::SparseMatrix& At, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w, const uint64_t seed, const uint64_t inv_density, const double overfit_threshold, const uint16_t trace_test_mse);
RcppExport SEXP _singlet_c_ard_nmf(SEXP ASEXP, SEXP AtSEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP, SEXP seedSEXP, SEXP inv_densitySEXP, SEXP overfit_thresholdSEXP, SEXP trace_test_mseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type At(AtSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< const uint64_t >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const uint64_t >::type inv_density(inv_densitySEXP);
    Rcpp::traits::input_parameter< const double >::type overfit_threshold(overfit_thresholdSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type trace_test_mse(trace_test_mseSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ard_nmf(A, At, tol, maxit, verbose, L1, L2, threads, w, seed, inv_density, overfit_threshold, trace_test_mse));
    return rcpp_result_gen;
END_RCPP
}
// c_ard_nmf_sparse_list
Rcpp::List c_ard_nmf_sparse_list(Rcpp::List A_, Rcpp::List At_, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w, const uint64_t rng_seed, const uint64_t inv_density, const double overfit_threshold, const uint16_t trace_test_mse);
RcppExport SEXP _singlet_c_ard_nmf_sparse_list(SEXP A_SEXP, SEXP At_SEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP, SEXP rng_seedSEXP, SEXP inv_densitySEXP, SEXP overfit_thresholdSEXP, SEXP trace_test_mseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type A_(A_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type At_(At_SEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< const uint64_t >::type rng_seed(rng_seedSEXP);
    Rcpp::traits::input_parameter< const uint64_t >::type inv_density(inv_densitySEXP);
    Rcpp::traits::input_parameter< const double >::type overfit_threshold(overfit_thresholdSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type trace_test_mse(trace_test_mseSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ard_nmf_sparse_list(A_, At_, tol, maxit, verbose, L1, L2, threads, w, rng_seed, inv_density, overfit_threshold, trace_test_mse));
    return rcpp_result_gen;
END_RCPP
}
// c_ard_nmf_dense
Rcpp::List c_ard_nmf_dense(Eigen::MatrixXd& A, Eigen::MatrixXd& At, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w, const uint64_t seed, const uint64_t inv_density, const double overfit_threshold, const uint16_t trace_test_mse);
RcppExport SEXP _singlet_c_ard_nmf_dense(SEXP ASEXP, SEXP AtSEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP, SEXP seedSEXP, SEXP inv_densitySEXP, SEXP overfit_thresholdSEXP, SEXP trace_test_mseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type At(AtSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< const uint64_t >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const uint64_t >::type inv_density(inv_densitySEXP);
    Rcpp::traits::input_parameter< const double >::type overfit_threshold(overfit_thresholdSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type trace_test_mse(trace_test_mseSEXP);
    rcpp_result_gen = Rcpp::wrap(c_ard_nmf_dense(A, At, tol, maxit, verbose, L1, L2, threads, w, seed, inv_density, overfit_threshold, trace_test_mse));
    return rcpp_result_gen;
END_RCPP
}
// spatial_graph
Rcpp::S4 spatial_graph(std::vector<double> c1, std::vector<double> c2, double max_dist, size_t max_k, const size_t threads);
RcppExport SEXP _singlet_spatial_graph(SEXP c1SEXP, SEXP c2SEXP, SEXP max_distSEXP, SEXP max_kSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< double >::type max_dist(max_distSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_k(max_kSEXP);
    Rcpp::traits::input_parameter< const size_t >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatial_graph(c1, c2, max_dist, max_k, threads));
    return rcpp_result_gen;
END_RCPP
}
// c_LKNN
Rcpp::S4 c_LKNN(Eigen::MatrixXf m, Eigen::VectorXf coord_x, Eigen::VectorXf coord_y, size_t k, float radius, std::string metric, bool similarity, float max_dist, bool verbose, size_t threads);
RcppExport SEXP _singlet_c_LKNN(SEXP mSEXP, SEXP coord_xSEXP, SEXP coord_ySEXP, SEXP kSEXP, SEXP radiusSEXP, SEXP metricSEXP, SEXP similaritySEXP, SEXP max_distSEXP, SEXP verboseSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXf >::type m(mSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXf >::type coord_x(coord_xSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXf >::type coord_y(coord_ySEXP);
    Rcpp::traits::input_parameter< size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< float >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< bool >::type similarity(similaritySEXP);
    Rcpp::traits::input_parameter< float >::type max_dist(max_distSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< size_t >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(c_LKNN(m, coord_x, coord_y, k, radius, metric, similarity, max_dist, verbose, threads));
    return rcpp_result_gen;
END_RCPP
}
// c_SNN
Rcpp::S4 c_SNN(Rcpp::SparseMatrix G, double min_similarity, size_t threads);
RcppExport SEXP _singlet_c_SNN(SEXP GSEXP, SEXP min_similaritySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< double >::type min_similarity(min_similaritySEXP);
    Rcpp::traits::input_parameter< size_t >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(c_SNN(G, min_similarity, threads));
    return rcpp_result_gen;
END_RCPP
}
// c_gcnmf
Rcpp::List c_gcnmf(Rcpp::SparseMatrix& A, Rcpp::SparseMatrix& At, Rcpp::SparseMatrix& G, const double tol, const uint16_t maxit, const bool verbose, const double L1, const double L2, const uint16_t threads, Eigen::MatrixXd w);
RcppExport SEXP _singlet_c_gcnmf(SEXP ASEXP, SEXP AtSEXP, SEXP GSEXP, SEXP tolSEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP threadsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type At(AtSEXP);
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(c_gcnmf(A, At, G, tol, maxit, verbose, L1, L2, threads, w));
    return rcpp_result_gen;
END_RCPP
}
// c_differentiate_model
Rcpp::NumericMatrix c_differentiate_model(Rcpp::NumericMatrix& h, Rcpp::SparseMatrix& G);
RcppExport SEXP _singlet_c_differentiate_model(SEXP hSEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type h(hSEXP);
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix& >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(c_differentiate_model(h, G));
    return rcpp_result_gen;
END_RCPP
}
// c_assign_cells_to_edge_clusters
Rcpp::IntegerMatrix c_assign_cells_to_edge_clusters(Rcpp::SparseMatrix G, Rcpp::IntegerVector h_diff_clusters);
RcppExport SEXP _singlet_c_assign_cells_to_edge_clusters(SEXP GSEXP, SEXP h_diff_clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::SparseMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type h_diff_clusters(h_diff_clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(c_assign_cells_to_edge_clusters(G, h_diff_clusters));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_singlet_weight_by_split", (DL_FUNC) &_singlet_weight_by_split, 3},
    {"_singlet_rowwise_compress_sparse", (DL_FUNC) &_singlet_rowwise_compress_sparse, 3},
    {"_singlet_rowwise_compress_dense", (DL_FUNC) &_singlet_rowwise_compress_dense, 3},
    {"_singlet_Rcpp_predict", (DL_FUNC) &_singlet_Rcpp_predict, 5},
    {"_singlet_c_project_model", (DL_FUNC) &_singlet_c_project_model, 5},
    {"_singlet_c_nmf", (DL_FUNC) &_singlet_c_nmf, 9},
    {"_singlet_c_nmf_sparse_list", (DL_FUNC) &_singlet_c_nmf_sparse_list, 9},
    {"_singlet_write_IVCSC", (DL_FUNC) &_singlet_write_IVCSC, 2},
    {"_singlet_save_IVSparse", (DL_FUNC) &_singlet_save_IVSparse, 2},
    {"_singlet_build_IVCSC2", (DL_FUNC) &_singlet_build_IVCSC2, 2},
    {"_singlet_read_IVSparse", (DL_FUNC) &_singlet_read_IVSparse, 0},
    {"_singlet_run_nmf_on_sparsematrix_list", (DL_FUNC) &_singlet_run_nmf_on_sparsematrix_list, 9},
    {"_singlet_c_mu_nmf", (DL_FUNC) &_singlet_c_mu_nmf, 9},
    {"_singlet_c_nmf_dense", (DL_FUNC) &_singlet_c_nmf_dense, 9},
    {"_singlet_c_linked_nmf", (DL_FUNC) &_singlet_c_linked_nmf, 11},
    {"_singlet_c_ard_nmf", (DL_FUNC) &_singlet_c_ard_nmf, 13},
    {"_singlet_c_ard_nmf_sparse_list", (DL_FUNC) &_singlet_c_ard_nmf_sparse_list, 13},
    {"_singlet_c_ard_nmf_dense", (DL_FUNC) &_singlet_c_ard_nmf_dense, 13},
    {"_singlet_spatial_graph", (DL_FUNC) &_singlet_spatial_graph, 5},
    {"_singlet_c_LKNN", (DL_FUNC) &_singlet_c_LKNN, 10},
    {"_singlet_c_SNN", (DL_FUNC) &_singlet_c_SNN, 3},
    {"_singlet_c_gcnmf", (DL_FUNC) &_singlet_c_gcnmf, 10},
    {"_singlet_c_differentiate_model", (DL_FUNC) &_singlet_c_differentiate_model, 2},
    {"_singlet_c_assign_cells_to_edge_clusters", (DL_FUNC) &_singlet_c_assign_cells_to_edge_clusters, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_singlet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
