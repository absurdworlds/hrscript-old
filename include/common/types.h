#ifndef _hrscript_types_
#define _hrscript_types_

#if defined(_MSC_VER)
	typedef unsigned __int8		u8;
	typedef signed __int8		i8;

	typedef unsigned __int16	u16;
	typedef signed __int16		i16;
	
	typedef unsigned __int32	u32;
	typedef signed __int32		i32;
	
	typedef signed __int64		i64;
	typedef unsigned __int64	u64;
#else
	typedef unsigned char		u8;
	typedef signed char		i8;
	
	typedef unsigned short		u16;
	typedef signed short		i16;
	
	typedef signed int		i32;
	typedef unsigned int		u32;
	
	typedef signed long long	i64;
	typedef unsigned long long	u64;
#endif

typedef float				f32;
typedef double				f64;

#endif //_hrscript_types_
