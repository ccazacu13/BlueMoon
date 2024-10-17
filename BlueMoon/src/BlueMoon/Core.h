#pragma once

#ifdef BM_PLATFORM_WINDOWS
	#ifdef BM_BUILD_DLL
		#define BLUEMOON_API __declspec(dllexport)
	#else
		#define BLUEMOON_API __declspec(dllimport)
	#endif
#else 
	#error BLUEMOON ONLY SUPPORTS WINDOWS!
#endif