#pragma once



#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_DLL_BUILD
		#define HAZLE_API __declspec(dllexport)
	#else
		#define HAZLE_API __declspec(dllimport)
	#endif
#else 
	#error Hazle only suports windows
#endif 
