#ifndef REGISTER_OSTREAM_HPP
#define REGISTER_OSTREAM_HPP
#include <ostream>
#include "macro_utils.h"

#define NAME_SEPERATOR  ":"
#define VAR_SEPERATOR   ", "
#define OS_BEGIN        ": { "
#define OS_END          " }"

#ifdef PP_ARG_N
#undef PP_ARG_N
#endif
#define PP_ARG_N(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20, N,...) N


#define REGISTER_OSTREAM(...) OVERLOADED_MACRO(REGISTER_OSTREAM, __VA_ARGS__)

#define REGISTER_OSTREAM0(Class)                                        \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN << OS_END;                                 \
    return os;                                                          \
    }

#define REGISTER_OSTREAM1(Class, p1)                                    \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM2(Class, p1, p2)                                \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM3(Class, p1, p2, p3)                            \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM4(Class, p1, p2, p3, p4)                        \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM5(Class, p1, p2, p3, p4, p5)                    \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM6(Class, p1, p2, p3, p4, p5, p6)                \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM7(Class, p1, p2, p3, p4, p5, p6, p7)            \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM8(Class, p1, p2, p3, p4, p5, p6, p7, p8)        \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM9(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9)    \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM10(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10)                                                                \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM11(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11)                                                           \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM12(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12)                                                      \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM13(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13)                                                 \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << VAR_SEPERATOR                 \
    << #p13 << NAME_SEPERATOR << c.p13 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM14(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14)                                            \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << VAR_SEPERATOR                 \
    << #p13 << NAME_SEPERATOR << c.p13 << VAR_SEPERATOR                 \
    << #p14 << NAME_SEPERATOR << c.p14 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM15(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15)                                       \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << VAR_SEPERATOR                 \
    << #p13 << NAME_SEPERATOR << c.p13 << VAR_SEPERATOR                 \
    << #p14 << NAME_SEPERATOR << c.p14 << VAR_SEPERATOR                 \
    << #p15 << NAME_SEPERATOR << c.p15 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM16(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16)                                  \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << VAR_SEPERATOR                 \
    << #p13 << NAME_SEPERATOR << c.p13 << VAR_SEPERATOR                 \
    << #p14 << NAME_SEPERATOR << c.p14 << VAR_SEPERATOR                 \
    << #p15 << NAME_SEPERATOR << c.p15 << VAR_SEPERATOR                 \
    << #p16 << NAME_SEPERATOR << c.p16 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM17(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16, p17)                             \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << VAR_SEPERATOR                 \
    << #p13 << NAME_SEPERATOR << c.p13 << VAR_SEPERATOR                 \
    << #p14 << NAME_SEPERATOR << c.p14 << VAR_SEPERATOR                 \
    << #p15 << NAME_SEPERATOR << c.p15 << VAR_SEPERATOR                 \
    << #p16 << NAME_SEPERATOR << c.p16 << VAR_SEPERATOR                 \
    << #p17 << NAME_SEPERATOR << c.p17 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM18(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16, p17, p18)                        \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << VAR_SEPERATOR                 \
    << #p13 << NAME_SEPERATOR << c.p13 << VAR_SEPERATOR                 \
    << #p14 << NAME_SEPERATOR << c.p14 << VAR_SEPERATOR                 \
    << #p15 << NAME_SEPERATOR << c.p15 << VAR_SEPERATOR                 \
    << #p16 << NAME_SEPERATOR << c.p16 << VAR_SEPERATOR                 \
    << #p17 << NAME_SEPERATOR << c.p17 << VAR_SEPERATOR                 \
    << #p18 << NAME_SEPERATOR << c.p18 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM19(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16, p17, p18, p19)                   \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << VAR_SEPERATOR                 \
    << #p13 << NAME_SEPERATOR << c.p13 << VAR_SEPERATOR                 \
    << #p14 << NAME_SEPERATOR << c.p14 << VAR_SEPERATOR                 \
    << #p15 << NAME_SEPERATOR << c.p15 << VAR_SEPERATOR                 \
    << #p16 << NAME_SEPERATOR << c.p16 << VAR_SEPERATOR                 \
    << #p17 << NAME_SEPERATOR << c.p17 << VAR_SEPERATOR                 \
    << #p18 << NAME_SEPERATOR << c.p18 << VAR_SEPERATOR                 \
    << #p19 << NAME_SEPERATOR << c.p19 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM20(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20)              \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPERATOR << c.p1 << VAR_SEPERATOR                   \
    << #p2 << NAME_SEPERATOR << c.p2 << VAR_SEPERATOR                   \
    << #p3 << NAME_SEPERATOR << c.p3 << VAR_SEPERATOR                   \
    << #p4 << NAME_SEPERATOR << c.p4 << VAR_SEPERATOR                   \
    << #p5 << NAME_SEPERATOR << c.p5 << VAR_SEPERATOR                   \
    << #p6 << NAME_SEPERATOR << c.p6 << VAR_SEPERATOR                   \
    << #p7 << NAME_SEPERATOR << c.p7 << VAR_SEPERATOR                   \
    << #p8 << NAME_SEPERATOR << c.p8 << VAR_SEPERATOR                   \
    << #p9 << NAME_SEPERATOR << c.p9 << VAR_SEPERATOR                   \
    << #p10 << NAME_SEPERATOR << c.p10 << VAR_SEPERATOR                 \
    << #p11 << NAME_SEPERATOR << c.p11 << VAR_SEPERATOR                 \
    << #p12 << NAME_SEPERATOR << c.p12 << VAR_SEPERATOR                 \
    << #p13 << NAME_SEPERATOR << c.p13 << VAR_SEPERATOR                 \
    << #p14 << NAME_SEPERATOR << c.p14 << VAR_SEPERATOR                 \
    << #p15 << NAME_SEPERATOR << c.p15 << VAR_SEPERATOR                 \
    << #p16 << NAME_SEPERATOR << c.p16 << VAR_SEPERATOR                 \
    << #p17 << NAME_SEPERATOR << c.p17 << VAR_SEPERATOR                 \
    << #p18 << NAME_SEPERATOR << c.p18 << VAR_SEPERATOR                 \
    << #p19 << NAME_SEPERATOR << c.p19 << VAR_SEPERATOR                 \
    << #p20 << NAME_SEPERATOR << c.p20 << OS_END;                       \
    return os;                                                          \
    }


#endif // REGISTER_OSTREAM_HPP
