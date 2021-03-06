#pragma once

/**
 * @file rcpp_strict_r_headers.hpp
 * @author your name (you@domain.com)
 * @brief At most as of R-3.3.3 the file /include/R_ext/RS.h (Windows at least) has a section that seems to be 
 * for backward compat with S. It defines a macro named 'Free', which can derail compilation when using Visual CPP. 
 * We need to define STRICT_R_HEADERS to prevent this, before we include Rcpp.h
 * @date 2020-06-14
 * 
 * @copyright Copyright (c) 2020
 */

#define STRICT_R_HEADERS
#include <Rcpp.h>
