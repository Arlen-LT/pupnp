#ifndef POSIX_OVERWRTIES_H
#define POSIX_OVERWRTIES_H
#ifdef _WIN32

	/* POSIX names for functions */
	#define fileno _fileno
	#define unlink _unlink
	#define strcasecmp _stricmp
	#define strdup _strdup
	#define stricmp _stricmp
	#define strncasecmp strnicmp
	#define strnicmp _strnicmp

	/* Secure versions of functions */
	#define strncpy(arg1,arg2,arg3) strncpy_s(arg1,arg3,arg2,arg3)

#endif /* _WIN32 */
#endif /* POSIX_OVERWRTIES_H */