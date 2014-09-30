#ifndef hrscript_hrscript
#define hrscript_hrscript

#ifdef __cplusplus
extern "C" {
#endif

/*! This is a declaration of structure which is used for holding hrenginscript
    virtual machine context */
struct hrsContext;

/*! This is an enumeration of all hrscript virtual machine opcodes */
typedef enum hrsOpcode {
	hrsOP_Nvm     = 0777,

	hrsOP_Move    = 0000,		/* 000 000 000 */
	hrsOP_Limm    = 0001,		/* 000 000 001 */
	hrsOP_Mvn     = 0002,		/* 000 000 010 */
	hrsOP_Swp     = 0003,		/* 000 000 011 */

	hrsOP_Load    = 0004,		/* 000 000 100 */
	hrsOP_Store   = 0005,		/* 000 000 101 */
	hrsOP_Sttop   = 0006,		/* 000 000 110 */

	hrsOP_Add   = 0020,		/* 000 010 000 */
	hrsOP_Add_i = 0021,		/* 000 010 001 */
	hrsOP_Sub   = 0022,		/* 000 010 010 */
	hrsOP_Sub_i = 0023,		/* 000 010 011 */
	hrsOP_Rsb   = 0024,		/* 000 010 100 */
	hrsOP_Rsb_i = 0025,		/* 000 010 101 */

	hrsOP_Adc   = 0026,		/* 000 010 110 */
	hrsOP_Sbc   = 0027,		/* 000 010 111 */

	hrsOP_And   = 0100,		/* 001 011 000 */
	hrsOP_Or    = 0102,		/* 001 011 010 */
	hrsOP_Xor   = 0104,		/* 001 011 100 */
	hrsOP_Not   = 0106,		/* 001 011 110 */

	hrsOP_Shr    = 0110,		/* 000 011 000 */
	hrsOP_Shri   = 0111,		/* 000 011 001 */
	hrsOP_Rot    = 0112,		/* 000 011 010 */
	hrsOP_Roti   = 0114,		/* 000 011 011 */

	hrsOP_sMul     = 0040,		/* 000 100 000 */
	hrsOP_sMul_i   = 0041,		/* 000 100 001 */
	hrsOP_sDiv     = 0042,		/* 000 100 010 */
	hrsOP_sDiv_i   = 0043,		/* 000 100 011 */
	hrsOP_uMul     = 0044,		/* 000 100 100 */
	hrsOP_uMul_i   = 0045,		/* 000 100 101 */
	hrsOP_uDiv     = 0046,		/* 000 100 110 */
	hrsOP_uDiv_i   = 0047,		/* 000 100 111 */

	hrsOP_Call  = 0104,		/* 001 000 100 */
	hrsOP_Retn  = 0105,		/* 001 000 101 */

	hrsOP_Tst   = 0110,		/* 001 001 000 */
	hrsOP_Cmp   = 0112,		/* 001 001 010 */

	hrsOP_BO    = 0140,		/* 001 100 000 */
	hrsOP_BA    = 0160,		/* 001 110 000 */

	hrsOP_fLoad   = 0300,		/* 011 000 000 */
	hrsOP_fStore  = 0301,		/* 011 000 001 */
	hrsOP_fMove   = 0302,		/* 011 000 010 */
	hrsOP_fSwap   = 0303,		/* 011 000 011 */
	hrsOP_fdLoad  = 0304,		/* 011 000 100 */
	hrsOP_fdStore = 0305,		/* 011 000 101 */

	hrsOP_fAdd    = 0310,		/* 011 001 000 */
	hrsOP_fSub    = 0311,		/* 011 001 001 */
	hrsOP_fMul    = 0312,		/* 011 001 010 */
	hrsOP_fDiv    = 0313,		/* 011 001 011 */
	hrsOP_fdAdd   = 0314,		/* 011 001 100 */
	hrsOP_fdSub   = 0315,		/* 011 001 101 */
	hrsOP_fdMul   = 0316,		/* 011 001 110 */
	hrsOP_fdDiv   = 0317,		/* 011 001 111 */

	hrsOP_fPow    = 0320,		/* 011 010 000 */
	hrsOP_fMod    = 0321,		/* 011 010 001 */
	hrsOP_fSqrt   = 0322,		/* 011 010 010 */
	hrsOP_fdPow   = 0324,		/* 011 010 100 */
	hrsOP_feMod   = 0325,		/* 011 010 101 */
	hrsOP_fdSqrt  = 0326,		/* 011 010 110 */

	hrsOP_fConv   = 0331,		/* 011 011 001 */
	hrsOP_fAbs    = 0333,		/* 011 011 011 */
	hrsOP_fdConv  = 0335,		/* 011 011 001 */
	hrsOP_fdAbs   = 0337,		/* 011 011 111 */

	hrsOP_fCos    = 0340,		/* 011 100 000 */
	hrsOP_fSin    = 0341,		/* 011 100 001 */
	hrsOP_fAcos   = 0342,		/* 011 100 010 */
	hrsOP_fAsin   = 0343,		/* 011 100 011 */
	hrsOP_fdCos   = 0344,		/* 011 100 100 */
	hrsOP_fdSin   = 0345,		/* 011 100 101 */
	hrsOP_fdAcos  = 0346,		/* 011 100 110 */
	hrsOP_fdAsin  = 0347,		/* 011 100 111 */

	hrsOP_vLoad    = 0x2000,	/* 10 0000 0000 0000 */
	hrsOP_vStore   = 0x2001,	/* 10 0000 0000 0001 */
	hrsOP_vMove    = 0x2001,	/* 10 0000 0000 0010 */

	hrsOP_dvLoad   = 0x2100,	/* 10 1000 0000 0000 */
	hrsOP_dvStore  = 0x2101,	/* 10 1000 0000 0001 */
	hrsOP_dvMove   = 0x2101,	/* 10 1000 0000 0010 */
} hrsOpcode;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif