/*
 * module_dukf.h
 *
 *  Created on: Dec 17, 2016
 *      Author: kolban
 */
#if !defined(_MODULE_DUKF)
#define _MODULE_DUKF
#include <duktape.h>

void ModuleDUKF(duk_context *ctx);
void dukf_runFile(duk_context *ctx, char *fileName);
#endif /* _MODULE_DUKF */
