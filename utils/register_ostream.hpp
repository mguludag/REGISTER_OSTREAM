#ifndef REGISTER_OSTREAM_HPP
#define REGISTER_OSTREAM_HPP
#include <ostream>
#include "macro_utils.h"

#define NAME_SEPARATOR  ":"
#define VAR_SEPARATOR   ", "
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
    << #p1 << NAME_SEPARATOR << c.p1 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM2(Class, p1, p2)                                \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM3(Class, p1, p2, p3)                            \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM4(Class, p1, p2, p3, p4)                        \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM5(Class, p1, p2, p3, p4, p5)                    \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM6(Class, p1, p2, p3, p4, p5, p6)                \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM7(Class, p1, p2, p3, p4, p5, p6, p7)            \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM8(Class, p1, p2, p3, p4, p5, p6, p7, p8)        \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM9(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9)    \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << OS_END;                         \
    return os;                                                          \
    }

#define REGISTER_OSTREAM10(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10)                                                                \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM11(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11)                                                           \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM12(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12)                                                      \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM13(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13)                                                 \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << VAR_SEPARATOR                 \
    << #p13 << NAME_SEPARATOR << c.p13 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM14(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14)                                            \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << VAR_SEPARATOR                 \
    << #p13 << NAME_SEPARATOR << c.p13 << VAR_SEPARATOR                 \
    << #p14 << NAME_SEPARATOR << c.p14 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM15(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15)                                       \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << VAR_SEPARATOR                 \
    << #p13 << NAME_SEPARATOR << c.p13 << VAR_SEPARATOR                 \
    << #p14 << NAME_SEPARATOR << c.p14 << VAR_SEPARATOR                 \
    << #p15 << NAME_SEPARATOR << c.p15 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM16(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16)                                  \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << VAR_SEPARATOR                 \
    << #p13 << NAME_SEPARATOR << c.p13 << VAR_SEPARATOR                 \
    << #p14 << NAME_SEPARATOR << c.p14 << VAR_SEPARATOR                 \
    << #p15 << NAME_SEPARATOR << c.p15 << VAR_SEPARATOR                 \
    << #p16 << NAME_SEPARATOR << c.p16 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM17(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16, p17)                             \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << VAR_SEPARATOR                 \
    << #p13 << NAME_SEPARATOR << c.p13 << VAR_SEPARATOR                 \
    << #p14 << NAME_SEPARATOR << c.p14 << VAR_SEPARATOR                 \
    << #p15 << NAME_SEPARATOR << c.p15 << VAR_SEPARATOR                 \
    << #p16 << NAME_SEPARATOR << c.p16 << VAR_SEPARATOR                 \
    << #p17 << NAME_SEPARATOR << c.p17 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM18(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16, p17, p18)                        \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << VAR_SEPARATOR                 \
    << #p13 << NAME_SEPARATOR << c.p13 << VAR_SEPARATOR                 \
    << #p14 << NAME_SEPARATOR << c.p14 << VAR_SEPARATOR                 \
    << #p15 << NAME_SEPARATOR << c.p15 << VAR_SEPARATOR                 \
    << #p16 << NAME_SEPARATOR << c.p16 << VAR_SEPARATOR                 \
    << #p17 << NAME_SEPARATOR << c.p17 << VAR_SEPARATOR                 \
    << #p18 << NAME_SEPARATOR << c.p18 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM19(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16, p17, p18, p19)                   \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << VAR_SEPARATOR                 \
    << #p13 << NAME_SEPARATOR << c.p13 << VAR_SEPARATOR                 \
    << #p14 << NAME_SEPARATOR << c.p14 << VAR_SEPARATOR                 \
    << #p15 << NAME_SEPARATOR << c.p15 << VAR_SEPARATOR                 \
    << #p16 << NAME_SEPARATOR << c.p16 << VAR_SEPARATOR                 \
    << #p17 << NAME_SEPARATOR << c.p17 << VAR_SEPARATOR                 \
    << #p18 << NAME_SEPARATOR << c.p18 << VAR_SEPARATOR                 \
    << #p19 << NAME_SEPARATOR << c.p19 << OS_END;                       \
    return os;                                                          \
    }

#define REGISTER_OSTREAM20(Class, p1, p2, p3, p4, p5, p6, p7, p8, p9,   \
    p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20)              \
    friend std::ostream& operator<<(std::ostream& os, Class& c) {       \
    os << #Class << OS_BEGIN                                            \
    << #p1 << NAME_SEPARATOR << c.p1 << VAR_SEPARATOR                   \
    << #p2 << NAME_SEPARATOR << c.p2 << VAR_SEPARATOR                   \
    << #p3 << NAME_SEPARATOR << c.p3 << VAR_SEPARATOR                   \
    << #p4 << NAME_SEPARATOR << c.p4 << VAR_SEPARATOR                   \
    << #p5 << NAME_SEPARATOR << c.p5 << VAR_SEPARATOR                   \
    << #p6 << NAME_SEPARATOR << c.p6 << VAR_SEPARATOR                   \
    << #p7 << NAME_SEPARATOR << c.p7 << VAR_SEPARATOR                   \
    << #p8 << NAME_SEPARATOR << c.p8 << VAR_SEPARATOR                   \
    << #p9 << NAME_SEPARATOR << c.p9 << VAR_SEPARATOR                   \
    << #p10 << NAME_SEPARATOR << c.p10 << VAR_SEPARATOR                 \
    << #p11 << NAME_SEPARATOR << c.p11 << VAR_SEPARATOR                 \
    << #p12 << NAME_SEPARATOR << c.p12 << VAR_SEPARATOR                 \
    << #p13 << NAME_SEPARATOR << c.p13 << VAR_SEPARATOR                 \
    << #p14 << NAME_SEPARATOR << c.p14 << VAR_SEPARATOR                 \
    << #p15 << NAME_SEPARATOR << c.p15 << VAR_SEPARATOR                 \
    << #p16 << NAME_SEPARATOR << c.p16 << VAR_SEPARATOR                 \
    << #p17 << NAME_SEPARATOR << c.p17 << VAR_SEPARATOR                 \
    << #p18 << NAME_SEPARATOR << c.p18 << VAR_SEPARATOR                 \
    << #p19 << NAME_SEPARATOR << c.p19 << VAR_SEPARATOR                 \
    << #p20 << NAME_SEPARATOR << c.p20 << OS_END;                       \
    return os;                                                          \
    }


#endif // REGISTER_OSTREAM_HPP
