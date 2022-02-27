#ifndef MACRO_UTILS_H
#define MACRO_UTILS_H

#define EXPAND(x) x
#define PP_ARG_N(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20, N,...) N
#define PP_NARG(...) EXPAND(PP_ARG_N(__VA_ARGS__, 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0))

#define OVERLOADED_MACRO(M, ...) _OVR(M, PP_NARG(__VA_ARGS__)) (__VA_ARGS__)
#define _OVR(macroName, number_of_args)   _OVR_EXPAND(macroName, number_of_args)
#define _OVR_EXPAND(macroName, number_of_args)    macroName##number_of_args


#endif // MACRO_UTILS_H
