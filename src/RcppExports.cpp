// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "XBART_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// xbart_predict
Rcpp::List xbart_predict(arma::mat X, double y_mean, Rcpp::XPtr<std::vector<std::vector<tree>>> tree_pnt);
RcppExport SEXP _XBART_xbart_predict(SEXP XSEXP, SEXP y_meanSEXP, SEXP tree_pntSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type y_mean(y_meanSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::vector<std::vector<tree>>> >::type tree_pnt(tree_pntSEXP);
    rcpp_result_gen = Rcpp::wrap(xbart_predict(X, y_mean, tree_pnt));
    return rcpp_result_gen;
END_RCPP
}
// xbart_multinomial_predict
Rcpp::List xbart_multinomial_predict(arma::mat X, double y_mean, size_t num_class, Rcpp::XPtr<std::vector<std::vector<tree>>> tree_pnt, arma::vec iteration);
RcppExport SEXP _XBART_xbart_multinomial_predict(SEXP XSEXP, SEXP y_meanSEXP, SEXP num_classSEXP, SEXP tree_pntSEXP, SEXP iterationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type y_mean(y_meanSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_class(num_classSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::vector<std::vector<tree>>> >::type tree_pnt(tree_pntSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type iteration(iterationSEXP);
    rcpp_result_gen = Rcpp::wrap(xbart_multinomial_predict(X, y_mean, num_class, tree_pnt, iteration));
    return rcpp_result_gen;
END_RCPP
}
// r_to_json
Rcpp::StringVector r_to_json(double y_mean, Rcpp::XPtr<std::vector<std::vector<tree>>> tree_pnt);
RcppExport SEXP _XBART_r_to_json(SEXP y_meanSEXP, SEXP tree_pntSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y_mean(y_meanSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::vector<std::vector<tree>>> >::type tree_pnt(tree_pntSEXP);
    rcpp_result_gen = Rcpp::wrap(r_to_json(y_mean, tree_pnt));
    return rcpp_result_gen;
END_RCPP
}
// json_to_r
Rcpp::List json_to_r(Rcpp::StringVector json_string_r);
RcppExport SEXP _XBART_json_to_r(SEXP json_string_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type json_string_r(json_string_rSEXP);
    rcpp_result_gen = Rcpp::wrap(json_to_r(json_string_r));
    return rcpp_result_gen;
END_RCPP
}
// start_profiler
SEXP start_profiler(SEXP str);
RcppExport SEXP _XBART_start_profiler(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(start_profiler(str));
    return rcpp_result_gen;
END_RCPP
}
// stop_profiler
SEXP stop_profiler();
RcppExport SEXP _XBART_stop_profiler() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(stop_profiler());
    return rcpp_result_gen;
END_RCPP
}
// sample_int_crank
IntegerVector sample_int_crank(int n, int size, NumericVector prob);
RcppExport SEXP _XBART_sample_int_crank(SEXP nSEXP, SEXP sizeSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int_crank(n, size, prob));
    return rcpp_result_gen;
END_RCPP
}
// sample_int_ccrank
SEXP sample_int_ccrank(int n, int size, NumericVector prob);
RcppExport SEXP _XBART_sample_int_ccrank(SEXP nSEXP, SEXP sizeSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int_ccrank(n, size, prob));
    return rcpp_result_gen;
END_RCPP
}
// sample_int_expj
IntegerVector sample_int_expj(int n, int size, NumericVector prob);
RcppExport SEXP _XBART_sample_int_expj(SEXP nSEXP, SEXP sizeSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int_expj(n, size, prob));
    return rcpp_result_gen;
END_RCPP
}
// sample_int_expjs
IntegerVector sample_int_expjs(int n, int size, NumericVector prob);
RcppExport SEXP _XBART_sample_int_expjs(SEXP nSEXP, SEXP sizeSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int_expjs(n, size, prob));
    return rcpp_result_gen;
END_RCPP
}
// XBART_cpp
Rcpp::List XBART_cpp(arma::mat y, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, size_t max_depth, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau, double no_split_penality, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool parallel, bool set_random_seed, size_t random_seed, bool sample_weights_flag);
RcppExport SEXP _XBART_XBART_cpp(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depthSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP no_split_penalitySEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP, SEXP sample_weights_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_sweeps(num_sweepsSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_cutpoints(num_cutpointsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type no_split_penality(no_split_penalitySEXP);
    Rcpp::traits::input_parameter< size_t >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< size_t >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< size_t >::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter< double >::type kap(kapSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< bool >::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_weights_flag(sample_weights_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART_cpp(y, X, Xtest, num_trees, num_sweeps, max_depth, n_min, num_cutpoints, alpha, beta, tau, no_split_penality, burnin, mtry, p_categorical, kap, s, verbose, parallel, set_random_seed, random_seed, sample_weights_flag));
    return rcpp_result_gen;
END_RCPP
}
// XBART_CLT_cpp
Rcpp::List XBART_CLT_cpp(arma::mat y, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, size_t max_depth, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau, double no_split_penality, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool parallel, bool set_random_seed, size_t random_seed, bool sample_weights_flag);
RcppExport SEXP _XBART_XBART_CLT_cpp(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depthSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP no_split_penalitySEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP, SEXP sample_weights_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_sweeps(num_sweepsSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_cutpoints(num_cutpointsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type no_split_penality(no_split_penalitySEXP);
    Rcpp::traits::input_parameter< size_t >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< size_t >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< size_t >::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter< double >::type kap(kapSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< bool >::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_weights_flag(sample_weights_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART_CLT_cpp(y, X, Xtest, num_trees, num_sweeps, max_depth, n_min, num_cutpoints, alpha, beta, tau, no_split_penality, burnin, mtry, p_categorical, kap, s, verbose, parallel, set_random_seed, random_seed, sample_weights_flag));
    return rcpp_result_gen;
END_RCPP
}
// XBART_multinomial_cpp
Rcpp::List XBART_multinomial_cpp(Rcpp::IntegerVector y, int num_class, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, size_t max_depth, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau_a, double tau_b, double no_split_penality, Rcpp::DoubleVector weight, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool set_random_seed, size_t random_seed, bool sample_weights_flag, double stop_threshold, size_t nthread);
RcppExport SEXP _XBART_XBART_multinomial_cpp(SEXP ySEXP, SEXP num_classSEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depthSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tau_aSEXP, SEXP tau_bSEXP, SEXP no_split_penalitySEXP, SEXP weightSEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP, SEXP sample_weights_flagSEXP, SEXP stop_thresholdSEXP, SEXP nthreadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type num_class(num_classSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_sweeps(num_sweepsSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_cutpoints(num_cutpointsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type tau_a(tau_aSEXP);
    Rcpp::traits::input_parameter< double >::type tau_b(tau_bSEXP);
    Rcpp::traits::input_parameter< double >::type no_split_penality(no_split_penalitySEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< size_t >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< size_t >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< size_t >::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter< double >::type kap(kapSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_weights_flag(sample_weights_flagSEXP);
    Rcpp::traits::input_parameter< double >::type stop_threshold(stop_thresholdSEXP);
    Rcpp::traits::input_parameter< size_t >::type nthread(nthreadSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART_multinomial_cpp(y, num_class, X, Xtest, num_trees, num_sweeps, max_depth, n_min, num_cutpoints, alpha, beta, tau_a, tau_b, no_split_penality, weight, burnin, mtry, p_categorical, kap, s, verbose, set_random_seed, random_seed, sample_weights_flag, stop_threshold, nthread));
    return rcpp_result_gen;
END_RCPP
}
// XBART_Probit_cpp
Rcpp::List XBART_Probit_cpp(arma::mat y, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, size_t max_depth, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau, double no_split_penality, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool parallel, bool set_random_seed, size_t random_seed, bool sample_weights_flag);
RcppExport SEXP _XBART_XBART_Probit_cpp(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depthSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP no_split_penalitySEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP, SEXP sample_weights_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_sweeps(num_sweepsSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_cutpoints(num_cutpointsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type no_split_penality(no_split_penalitySEXP);
    Rcpp::traits::input_parameter< size_t >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< size_t >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< size_t >::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter< double >::type kap(kapSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< bool >::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_weights_flag(sample_weights_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART_Probit_cpp(y, X, Xtest, num_trees, num_sweeps, max_depth, n_min, num_cutpoints, alpha, beta, tau, no_split_penality, burnin, mtry, p_categorical, kap, s, verbose, parallel, set_random_seed, random_seed, sample_weights_flag));
    return rcpp_result_gen;
END_RCPP
}
// XBART_MH_cpp
Rcpp::List XBART_MH_cpp(arma::mat y, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, size_t max_depth, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau, double no_split_penality, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool parallel, bool set_random_seed, size_t random_seed, bool sample_weights_flag);
RcppExport SEXP _XBART_XBART_MH_cpp(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depthSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP no_split_penalitySEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP, SEXP sample_weights_flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_sweeps(num_sweepsSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_cutpoints(num_cutpointsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type no_split_penality(no_split_penalitySEXP);
    Rcpp::traits::input_parameter< size_t >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< size_t >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< size_t >::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter< double >::type kap(kapSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< bool >::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter< size_t >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_weights_flag(sample_weights_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART_MH_cpp(y, X, Xtest, num_trees, num_sweeps, max_depth, n_min, num_cutpoints, alpha, beta, tau, no_split_penality, burnin, mtry, p_categorical, kap, s, verbose, parallel, set_random_seed, random_seed, sample_weights_flag));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_XBART_xbart_predict", (DL_FUNC) &_XBART_xbart_predict, 3},
    {"_XBART_xbart_multinomial_predict", (DL_FUNC) &_XBART_xbart_multinomial_predict, 5},
    {"_XBART_r_to_json", (DL_FUNC) &_XBART_r_to_json, 2},
    {"_XBART_json_to_r", (DL_FUNC) &_XBART_json_to_r, 1},
    {"_XBART_start_profiler", (DL_FUNC) &_XBART_start_profiler, 1},
    {"_XBART_stop_profiler", (DL_FUNC) &_XBART_stop_profiler, 0},
    {"_XBART_sample_int_crank", (DL_FUNC) &_XBART_sample_int_crank, 3},
    {"_XBART_sample_int_ccrank", (DL_FUNC) &_XBART_sample_int_ccrank, 3},
    {"_XBART_sample_int_expj", (DL_FUNC) &_XBART_sample_int_expj, 3},
    {"_XBART_sample_int_expjs", (DL_FUNC) &_XBART_sample_int_expjs, 3},
    {"_XBART_XBART_cpp", (DL_FUNC) &_XBART_XBART_cpp, 22},
    {"_XBART_XBART_CLT_cpp", (DL_FUNC) &_XBART_XBART_CLT_cpp, 22},
    {"_XBART_XBART_multinomial_cpp", (DL_FUNC) &_XBART_XBART_multinomial_cpp, 26},
    {"_XBART_XBART_Probit_cpp", (DL_FUNC) &_XBART_XBART_Probit_cpp, 22},
    {"_XBART_XBART_MH_cpp", (DL_FUNC) &_XBART_XBART_MH_cpp, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_XBART(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
