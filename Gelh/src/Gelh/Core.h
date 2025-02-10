#pragma once

#ifdef GELH_PLATFORM_WINDOWS
#ifdef GELH_BUILD_DLL
	#define GELH_API __declspec(dllexport)
#else
	#define GELH_API __declspec(dllimport)
#endif
#else
#error G.E.L.H. only support Windows !!!
#endif // GELH_PLATFORM_WINDOWS
