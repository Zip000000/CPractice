/*************************************************************************
	> File Name: huguang.c
	> Author: Zip 
	> Mail: 307110017@qq.com 
	> Created Time: 2019年05月19日 星期日 16时10分45秒
 ************************************************************************/


#define _P(a, frm, color) printf(color(frm), a)
#define P(a, color) _Generic((a), \
                             int : _P(a, "%d", color), \
                             double : _P(a, "%lf", color), \
                             float : P(a, "%f", color), \
                             char : _P(a, "%c", color), \
                             const char *: _P(a, "%s", color) \
                            )

#define EXPECT(a, b, c) { \
                        ____typeof(a) __temp_a = a, __temp_b = b; \
                         if(__temp_a c __temp_b) add_success(); \
                         else { \
                             add_failed(__FILE__, __LINE__, "expect " #a " " #c " " #b); \
                               printf(YELLOW(" actual : ")); \
                               P(__temp_a, YELLO); \
                               P(" vs ", YELLOW); \
                               P(__temp_b, YELLOW); \
                               printf("\n\n"); \
                         } \
                            printf("%s %s %s %s\n", #a, #c, #b, __temp_a c __temp_b ? "True" : "False"); \
                        }
