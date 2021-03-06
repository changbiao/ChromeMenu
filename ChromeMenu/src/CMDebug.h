//
//  CMDebug.h
//  ChromeMenu
//
//  Created by Maksym on 9/28/13.
//  Copyright (c) 2013 Maksym Stefanchuk. All rights reserved.
//

#ifndef ChromeMenu_CMDebug_h
#define ChromeMenu_CMDebug_h

// Note DEBUG macro is automated to be defined in "Preprocessor Macros"
// in project target Build Settings only for Debug builds.

//#define CM_DEBUG_ON
#define CM_DEBUG_LEVEL 3		// 1 is the lowest level, 3 is the highest


#if defined(DEBUG) && CM_DEBUG_LEVEL >= 1
# define XLog(format, ...)	NSLog(@format, ##__VA_ARGS__)
#else
# define XLog(format, ...)	((void)0)
#endif

#if defined(DEBUG) && CM_DEBUG_LEVEL >= 2
# define XLog2(format, ...)	NSLog(@format, ##__VA_ARGS__)
#else
# define XLog2(format, ...)	((void)0)
#endif

#if defined(DEBUG) && CM_DEBUG_LEVEL >= 3
# define XLog3(format, ...)	NSLog(@format, ##__VA_ARGS__)
#else
# define XLog3(format, ...)	((void)0)
#endif


#ifdef DEBUG
# define EVAL_IF_DEBUG(code) do code while(0)
#else
# define EVAL_IF_DEBUG(code) ((void)0)
#endif


/*
#if CM_DEBUG == 1 && (CM_DEBUG_LEVEL == 1 || CM_DEBUG_LEVEL == 2 || CM_DEBUG_LEVEL == 3)
#define XLog(format, ...) NSLog(@format, ##__VA_ARGS__)


#if CM_DEBUG_LEVEL == 2
# define XLog2(format, ...) NSLog(@format, ##__VA_ARGS__)
# define XLog3(format, ...) ((void)0)
#elif CM_DEBUG_LEVEL == 3
# define XLog2(format, ...) NSLog(@format, ##__VA_ARGS__)
# define XLog3(format, ...) NSLog(@format, ##__VA_ARGS__)
#else
# define XLog2(format, ...) ((void)0)
# define XLog3(format, ...) ((void)0)
#endif



#else

#define XLog(format, ...)	((void)0)
#define XLog2(format, ...)	((void)0)
#define XLog3(format, ...)	((void)0)

#endif
 
*/
 
 
#endif
