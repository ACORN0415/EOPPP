/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 3218630763 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      3218630763
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   const int8_t  f0;
   const int16_t  f1;
   int32_t  f2;
   signed f3 : 18;
   uint32_t  f4;
};

union U1 {
   uint64_t  f0;
   int16_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static int32_t *g_8[3] = {(void*)0,(void*)0,(void*)0};
static union U0 g_10 = {0xE8L};
static int32_t g_12 = 0L;
static int32_t g_21 = 0L;


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static int32_t * func_2(int32_t * p_3, union U0  p_4, union U0  p_5, int32_t * p_6, uint32_t  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_10 g_12 g_10.f0 g_21 g_10.f4
 * writes: g_12 g_21 g_8 g_10.f4
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    union U0 l_9 = {0x3AL};
    int32_t *l_11 = &g_12;
    int32_t **l_44 = (void*)0;
    int32_t **l_45 = (void*)0;
    int32_t **l_46 = &g_8[1];
    (*l_46) = func_2(g_8[1], l_9, g_10, l_11, g_12);
    return g_10.f0;
}


/* ------------------------------------------ */
/* 
 * reads : g_10.f0 g_12 g_21 g_10.f4 g_8
 * writes: g_12 g_21 g_8 g_10.f4
 */
static int32_t * func_2(int32_t * p_3, union U0  p_4, union U0  p_5, int32_t * p_6, uint32_t  p_7)
{ /* block id: 1 */
    uint32_t l_19 = 0x842F88D9L;
    int32_t **l_25 = &g_8[2];
    int32_t l_27 = 1L;
    int32_t l_28 = 0x24BE18A1L;
    int32_t l_29 = 0xA41536C7L;
    int32_t l_30 = 0x63439FCBL;
    int32_t l_31[4];
    int32_t l_32 = 0x4DFC4B74L;
    const uint32_t l_36 = 18446744073709551611UL;
    int i;
    for (i = 0; i < 4; i++)
        l_31[i] = (-1L);
    if ((safe_mod_func_uint32_t_u_u(g_10.f0, (safe_add_func_int64_t_s_s(g_10.f0, ((p_4.f0 || p_5.f0) != g_12))))))
    { /* block id: 2 */
        for (g_12 = 0; (g_12 == 0); ++g_12)
        { /* block id: 5 */
            int32_t *l_20 = &g_21;
            int32_t **l_22 = &g_8[1];
            (*l_20) |= (l_19 = (*p_6));
            if ((*p_6))
                break;
            (*l_22) = &g_12;
            for (p_4.f2 = 29; (p_4.f2 < 17); p_4.f2 = safe_sub_func_uint8_t_u_u(p_4.f2, 4))
            { /* block id: 12 */
                l_25 = &p_6;
            }
        }
        return p_3;
    }
    else
    { /* block id: 17 */
        int32_t *l_26[8][4] = {{&g_21,&g_12,&g_21,&g_12},{&g_21,&g_12,&g_21,&g_12},{&g_21,&g_12,&g_21,&g_12},{&g_21,&g_12,&g_21,&g_12},{&g_21,&g_12,&g_21,&g_12},{&g_21,&g_12,&g_21,&g_12},{&g_21,&g_12,&g_21,&g_12},{&g_21,&g_12,&g_21,&g_12}};
        uint8_t l_33[10];
        int i, j;
        for (i = 0; i < 10; i++)
            l_33[i] = 251UL;
        l_33[4]--;
        (*p_6) |= l_36;
        for (l_19 = 23; (l_19 != 50); l_19 = safe_add_func_int8_t_s_s(l_19, 9))
        { /* block id: 22 */
            union U1 l_39 = {0UL};
            int32_t l_43 = 0xF5D4612AL;
            l_43 ^= (l_39 , ((safe_unary_minus_func_int64_t_s(((safe_mul_func_uint8_t_u_u(g_21, (p_4.f0 >= (*p_6)))) , g_21))) || g_10.f0));
        }
    }
    for (g_10.f4 = 0; (g_10.f4 <= 2); g_10.f4 += 1)
    { /* block id: 28 */
        int i;
        for (l_19 = 0; (l_19 <= 2); l_19 += 1)
        { /* block id: 31 */
            for (l_28 = 0; (l_28 <= 2); l_28 += 1)
            { /* block id: 34 */
                int i;
                g_8[l_19] = &l_31[(l_28 + 1)];
            }
        }
        l_31[(g_10.f4 + 1)] = ((((((0x5A4DEA925521BE81LL || p_4.f0) < p_4.f0) , 0x285A49BCD9968C90LL) , (-9L)) , g_8[g_10.f4]) != p_3);
    }
    return &g_12;
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_10.f0;
    csmith_sink_ = g_12;
    csmith_sink_ = g_21;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 16
XXX total union variables: 3

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 18
   depth: 2, occurrence: 7
   depth: 5, occurrence: 1
   depth: 6, occurrence: 2
   depth: 7, occurrence: 1

XXX total number of pointers: 12

XXX times a variable address is taken: 14
XXX times a pointer is dereferenced on RHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 202

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 18
   level: 2, occurrence: 1
XXX number of pointers point to pointers: 5
XXX number of pointers point to scalars: 7
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1.58

XXX times a non-volatile is read: 34
XXX times a non-volatile is write: 20
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
   depth: 2, occurrence: 6
   depth: 3, occurrence: 2

XXX percentage a fresh-made variable is used: 19.3
XXX percentage an existing variable is used: 80.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

