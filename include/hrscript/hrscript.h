#ifndef hrscript_context
#define hrscript_context

#ifdef __cplusplus
extern "C" {
#endif

/*! This is a declaration of structure which is used for holding hrenginscript
    virtual machine context */
struct hrsContext;

/*! This is an enumeration of all hrscript virtual machine opcodes */
typedef enum hrsOpcode {
	hrsOP_Nop     = 0000,
	hrsOP_Invalid = 0777,
	
	hrsOP_Move   = 0010,		// 000 001 d00
	hrsOP_MoveM  = 0011,		// 000 001 d01
	hrsOP_Movet  = 0010,		// 000 001 d10
	hrsOP_MoveMt = 0011,		// 000 001 d11
	
	hrsOP_Limm  = 0022,		// 000 010 010
	
	hrsOP_Load  = 0020,		// 000 010 000
	hrsOP_Store = 0024,		// 000 010 100
	
	hrsOP_Add   = 0050,		// 000 101 000
	hrsOP_AddM  = 0051,		// 000 101 001
	hrsOP_Sub   = 0054,		// 000 101 100
	hrsOP_SubM  = 0055,		// 000 101 101
	hrsOP_Neg   = 0056,		// 000 101 110
	hrsOP_Mul   = 0060,		// 000 110 000
	hrsOP_Div   = 0065,		// 000 110 101
	hrsOP_Mod   = 0066,		// 000 110 110
	hrsOP_DMod  = 0067,		// 000 110 111
	
	hrsOP_And   = 0100,		// 001 000 000
	hrsOP_Or    = 0102,		// 001 000 010
	hrsOP_Xor   = 0104,		// 001 000 100
	hrsOP_Not   = 0106,		// 001 000 110
	
	hrsOP_NEq   = 0100,		// 001 001 000
	hrsOP_Eq    = 0112,		// 001 001 010
	hrsOP_Leq   = 0114,		// 001 001 100
	hrsOP_Ls    = 0116,		// 001 001 110
	hrsOP_LAnd  = 0120,		// 001 010 000
	hrsOP_LOr   = 0122,		// 001 010 010
	hrsOP_LNot  = 0126,		// 001 010 110
	
	hrsOP_Bt    = 0130,		// 001 011 000
	hrsOP_Bf    = 0132,		// 001 011 010
	
	hrsOP_Jmp   = 0140,		// 001 100 000
	hrsOP_Call  = 0141,		// 001 100 001
	hrsOP_Retn  = 0142,		// 001 100 010
	
	hrsOP_fLoad   = 0402,		// 100 000 010 
	hrsOP_fStore  = 0404,		// 100 000 100
	hrsOP_fAdd    = 0410,		// 100 001 000
	hrsOP_fSub    = 0412,		// 100 001 010
	hrsOP_fMul    = 0420,		// 100 010 000
	hrsOP_fDiv    = 0422,		// 100 010 010
	hrsOP_fMod    = 0424,		// 100 010 100
	hrsOP_fPow    = 0430,		// 100 011 000
	hrsOP_fSqrt   = 0432,		// 100 011 010
	
	hrsOP_vLoad   = 0502,		// 101 000 010 
	hrsOP_vStore  = 0504,		// 101 000 100
	hrsOP_vAdd    = 0510,		// 101 001 000
	hrsOP_vSub    = 0512,		// 101 001 010
	hrsOP_vMul    = 0520,		// 101 010 000
	hrsOP_vDiv    = 0522,		// 101 010 010
	hrsOP_vMod    = 0524,		// 101 010 100
	hrsOP_vPow    = 0530,		// 101 011 000
	hrsOP_vSqrt   = 0532,		// 101 011 010
	
	hrsOP_qvLoad  = 0602,		// 110 000 010 
	hrsOP_qvStore = 0604,		// 110 000 100
	hrsOP_qvAdd   = 0610,		// 110 001 000
	hrsOP_qvSub   = 0612,		// 110 001 010
	hrsOP_qvMul   = 0620,		// 110 010 000
	hrsOP_qvDiv   = 0622,		// 110 010 010
	hrsOP_qvMod   = 0624,		// 110 010 100
	hrsOP_qvPow   = 0630,		// 110 011 000
	hrsOP_qvSqrt  = 0632,		// 110 011 010
} hrsOpcode;


#ifdef __cplusplus
} // extern "C"
#endif

#endif