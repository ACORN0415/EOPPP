/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 2042122841 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      2042122841
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   signed f0 : 11;
   int32_t  f1;
   unsigned f2 : 22;
   unsigned f3 : 2;
};

union U1 {
   int8_t * f0;
   int64_t  f1;
   int8_t  f2;
   int8_t * f3;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = (-5L);
static struct S0 g_8 = {17,0xB8D96378L,1957,1};
static int8_t *g_10 = (void*)0;
static uint32_t g_11[6][2] = {{0x3CCD2466L,0x93E623B4L},{0UL,0x3CCD2466L},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3CCD2466L},{0UL,0x93E623B4L},{0x3CCD2466L,0x93E623B4L}};
static uint8_t g_16 = 255UL;
static struct S0 g_24 = {18,-1L,864,1};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static struct S0  func_4(struct S0  p_5, union U1  p_6, int8_t * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_8 g_10 g_11 g_16 g_24.f2
 * writes: g_3 g_8.f1 g_16 g_24 g_8
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_2[2];
    union U1 l_9 = {0};
    int i;
    for (i = 0; i < 2; i++)
        l_2[i] = 5L;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { /* block id: 3 */
        struct S0 *l_30 = &g_8;
        (*l_30) = func_4(g_8, l_9, g_10);
    }
    return g_24.f2;
}


/* ------------------------------------------ */
/* 
 * reads : g_8.f1 g_11 g_3 g_16
 * writes: g_8.f1 g_16 g_24 g_8
 */
static struct S0  func_4(struct S0  p_5, union U1  p_6, int8_t * p_7)
{ /* block id: 4 */
    int32_t *l_12 = &g_3;
    int32_t l_14 = 0L;
    struct S0 l_29 = {11,0x4418F7F2L,1471,1};
    for (p_5.f1 = 1; (p_5.f1 >= 0); p_5.f1 -= 1)
    { /* block id: 7 */
        int32_t **l_13[9] = {&l_12,&l_12,&l_12,&l_12,&l_12,&l_12,&l_12,&l_12,&l_12};
        int i;
        l_12 = (p_6 , l_12);
        for (g_8.f1 = 1; (g_8.f1 >= 0); g_8.f1 -= 1)
        { /* block id: 11 */
            int32_t l_15[2][5][3] = {{{0xC0A10336L,(-4L),(-4L)},{0x6E074F0EL,(-4L),4L},{0x4F69A750L,0xC0A10336L,0x7FEFB659L},{0x6E074F0EL,0x6E074F0EL,0x7FEFB659L},{0xC0A10336L,0x4F69A750L,4L}},{{(-4L),0x6E074F0EL,(-4L)},{(-4L),0xC0A10336L,0x6E074F0EL},{0xC0A10336L,(-4L),(-4L)},{0x6E074F0EL,0x4F69A750L,0x7FEFB659L},{4L,(-4L),0x6E074F0EL}}};
            int i, j, k;
            l_14 &= 9L;
            l_15[1][1][2] &= (g_11[(p_5.f1 + 1)][p_5.f1] <= (*l_12));
            g_16++;
            if (g_8.f1)
                continue;
        }
        for (l_14 = 0; (l_14 <= 1); l_14 += 1)
        { /* block id: 19 */
            uint64_t l_19 = 1UL;
            l_19--;
        }
        for (g_8.f1 = 1; (g_8.f1 >= 0); g_8.f1 -= 1)
        { /* block id: 24 */
            struct S0 *l_22 = (void*)0;
            struct S0 *l_23 = &g_24;
            (*l_23) = p_5;
            for (l_14 = 0; (l_14 <= 1); l_14 += 1)
            { /* block id: 28 */
                int i, j;
                p_5.f0 = g_11[g_8.f1][g_8.f1];
            }
        }
    }
    for (p_5.f1 = 0; (p_5.f1 >= (-27)); p_5.f1 = safe_sub_func_int8_t_s_s(p_5.f1, 8))
    { /* block id: 35 */
        int32_t *l_27 = &l_14;
        struct S0 *l_28 = &g_8;
        (*l_27) &= g_3;
        (*l_28) = p_5;
    }
    return l_29;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_3;
    csmith_sink_ = g_8.f0;
    csmith_sink_ = g_8.f1;
    csmith_sink_ = g_8.f2;
    csmith_sink_ = g_8.f3;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            csmith_sink_ = g_11[i][j];
        }
    }
    csmith_sink_ = g_16;
    csmith_sink_ = g_24.f0;
    csmith_sink_ = g_24.f1;
    csmith_sink_ = g_24.f2;
    csmith_sink_ = g_24.f3;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 7
   depth: 1, occurrence: 2
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 3
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 3
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 4
XXX times a single bitfield on LHS: 1
XXX times a single bitfield on RHS: 1

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 20
   depth: 2, occurrence: 9
   depth: 4, occurrence: 1

XXX total number of pointers: 13

XXX times a variable address is taken: 9
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 83

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 13
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 8
XXX number of pointers point to structs: 4
XXX percent of pointers has null in alias set: 53.8
XXX average alias set size: 1

XXX times a non-volatile is read: 22
XXX times a non-volatile is write: 21
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 20
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 7
   depth: 2, occurrence: 7
   depth: 3, occurrence: 1

XXX percentage a fresh-made variable is used: 36
XXX percentage an existing variable is used: 64
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

