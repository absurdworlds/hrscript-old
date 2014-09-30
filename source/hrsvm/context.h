#ifndef hrscript_context
#define hrscript_context

#include "registers.h"

struct hrsContext {
	hrs_reg pc;
	hrs_reg fp;
	hrs_reg dp;
	hrs_reg sp;
	hrs_reg gen[32];
	hrs_fpreg fp[32];
};

#endif