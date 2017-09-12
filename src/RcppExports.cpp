// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sendWSMessage
void sendWSMessage(std::string conn, bool binary, Rcpp::RObject message);
RcppExport SEXP httpuv_sendWSMessage(SEXP connSEXP, SEXP binarySEXP, SEXP messageSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type conn(connSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type message(messageSEXP);
    sendWSMessage(conn, binary, message);
    return R_NilValue;
END_RCPP
}
// closeWS
void closeWS(std::string conn);
RcppExport SEXP httpuv_closeWS(SEXP connSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type conn(connSEXP);
    closeWS(conn);
    return R_NilValue;
END_RCPP
}
// makeTcpServer
Rcpp::RObject makeTcpServer(const std::string& host, int port, Rcpp::Function onHeaders, Rcpp::Function onBodyData, Rcpp::Function onRequest, Rcpp::Function onWSOpen, Rcpp::Function onWSMessage, Rcpp::Function onWSClose);
RcppExport SEXP httpuv_makeTcpServer(SEXP hostSEXP, SEXP portSEXP, SEXP onHeadersSEXP, SEXP onBodyDataSEXP, SEXP onRequestSEXP, SEXP onWSOpenSEXP, SEXP onWSMessageSEXP, SEXP onWSCloseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type host(hostSEXP);
    Rcpp::traits::input_parameter< int >::type port(portSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onHeaders(onHeadersSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onBodyData(onBodyDataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onRequest(onRequestSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSOpen(onWSOpenSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSMessage(onWSMessageSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSClose(onWSCloseSEXP);
    rcpp_result_gen = Rcpp::wrap(makeTcpServer(host, port, onHeaders, onBodyData, onRequest, onWSOpen, onWSMessage, onWSClose));
    return rcpp_result_gen;
END_RCPP
}
// makePipeServer
Rcpp::RObject makePipeServer(const std::string& name, int mask, Rcpp::Function onHeaders, Rcpp::Function onBodyData, Rcpp::Function onRequest, Rcpp::Function onWSOpen, Rcpp::Function onWSMessage, Rcpp::Function onWSClose);
RcppExport SEXP httpuv_makePipeServer(SEXP nameSEXP, SEXP maskSEXP, SEXP onHeadersSEXP, SEXP onBodyDataSEXP, SEXP onRequestSEXP, SEXP onWSOpenSEXP, SEXP onWSMessageSEXP, SEXP onWSCloseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< int >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onHeaders(onHeadersSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onBodyData(onBodyDataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onRequest(onRequestSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSOpen(onWSOpenSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSMessage(onWSMessageSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type onWSClose(onWSCloseSEXP);
    rcpp_result_gen = Rcpp::wrap(makePipeServer(name, mask, onHeaders, onBodyData, onRequest, onWSOpen, onWSMessage, onWSClose));
    return rcpp_result_gen;
END_RCPP
}
// destroyServer
void destroyServer(std::string handle);
RcppExport SEXP httpuv_destroyServer(SEXP handleSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    destroyServer(handle);
    return R_NilValue;
END_RCPP
}
// run
bool run(int timeoutMillis);
RcppExport SEXP httpuv_run(SEXP timeoutMillisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type timeoutMillis(timeoutMillisSEXP);
    rcpp_result_gen = Rcpp::wrap(run(timeoutMillis));
    return rcpp_result_gen;
END_RCPP
}
// stopLoop
void stopLoop();
RcppExport SEXP httpuv_stopLoop() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    stopLoop();
    return R_NilValue;
END_RCPP
}
// base64encode
std::string base64encode(const Rcpp::RawVector& x);
RcppExport SEXP httpuv_base64encode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RawVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(base64encode(x));
    return rcpp_result_gen;
END_RCPP
}
// daemonize
Rcpp::RObject daemonize(std::string handle);
RcppExport SEXP httpuv_daemonize(SEXP handleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    rcpp_result_gen = Rcpp::wrap(daemonize(handle));
    return rcpp_result_gen;
END_RCPP
}
// destroyDaemonizedServer
void destroyDaemonizedServer(std::string handle);
RcppExport SEXP httpuv_destroyDaemonizedServer(SEXP handleSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type handle(handleSEXP);
    destroyDaemonizedServer(handle);
    return R_NilValue;
END_RCPP
}
// encodeURI
std::vector<std::string> encodeURI(std::vector<std::string> value);
RcppExport SEXP httpuv_encodeURI(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(encodeURI(value));
    return rcpp_result_gen;
END_RCPP
}
// encodeURIComponent
std::vector<std::string> encodeURIComponent(std::vector<std::string> value);
RcppExport SEXP httpuv_encodeURIComponent(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(encodeURIComponent(value));
    return rcpp_result_gen;
END_RCPP
}
// decodeURI
std::vector<std::string> decodeURI(std::vector<std::string> value);
RcppExport SEXP httpuv_decodeURI(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(decodeURI(value));
    return rcpp_result_gen;
END_RCPP
}
// decodeURIComponent
std::vector<std::string> decodeURIComponent(std::vector<std::string> value);
RcppExport SEXP httpuv_decodeURIComponent(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(decodeURIComponent(value));
    return rcpp_result_gen;
END_RCPP
}
// invoke_cpp_callback
void invoke_cpp_callback(Rcpp::List data, SEXP callback_sexp);
RcppExport SEXP httpuv_invoke_cpp_callback(SEXP dataSEXP, SEXP callback_sexpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type callback_sexp(callback_sexpSEXP);
    invoke_cpp_callback(data, callback_sexp);
    return R_NilValue;
END_RCPP
}
// getRNGState
void getRNGState();
RcppExport SEXP httpuv_getRNGState() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    getRNGState();
    return R_NilValue;
END_RCPP
}
