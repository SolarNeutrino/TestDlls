// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#define EXTERNC extern "C"
#ifdef DLL_EXPORTS
#define DLL_API EXTERNC __declspec(dllexport)
#define DLL_API_SYMBOL  __declspec(dllexport)
#else
#define DLL_API EXTERNC __declspec(dllimport)
#define DLL_API_SYMBOL  __declspec(dllimport)
#endif



extern DLL_API_SYMBOL int ndll;

DLL_API int fndll(void);

DLL_API int Foo(void);