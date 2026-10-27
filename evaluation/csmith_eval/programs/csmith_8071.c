/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 744425015 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      744425015
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   uint16_t  f0;
   uint16_t  f1;
   signed f2 : 28;
   const uint16_t  f3;
   int8_t * f4;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_2[4] = {(-5L),(-5L),(-5L),(-5L)};
static int32_t *g_5 = (void*)0;
static int32_t g_11 = 0xE348CC38L;
static int8_t g_15 = (-2L);


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);
static int32_t * func_9(uint64_t  p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_11 g_15
 * writes: g_2 g_5 g_11 g_15
 */
static union U1  func_1(void)
{ /* block id: 0 */
    int32_t l_7 = 0x22CB3A3FL;
    int32_t *l_8 = &g_2[2];
    int32_t **l_40 = &l_8;
    int32_t **l_41 = &g_5;
    int32_t *l_42[6] = {&g_11,&g_11,(void*)0,&g_11,&g_11,(void*)0};
    uint8_t l_43 = 0x57L;
    union U1 l_46 = {0x6691L};
    int i;
    for (g_2[1] = 0; (g_2[1] < 25); g_2[1] = safe_add_func_int8_t_s_s(g_2[1], 8))
    { /* block id: 3 */
        union U1 l_6 = {0x15CBL};
        g_5 = (void*)0;
        return l_6;
    }
    (*l_8) = l_7;
    (*l_41) = ((*l_40) = func_9(g_2[2]));
    l_43--;
    return l_46;
}


/* ------------------------------------------ */
/* 
 * reads : g_11 g_2 g_15
 * writes: g_11 g_15 g_2 g_5
 */
static int32_t * func_9(uint64_t  p_10)
{ /* block id: 8 */
    uint32_t l_16 = 0UL;
    int32_t *l_39 = &g_11;
lbl_38:
    for (p_10 = 0; (p_10 <= 3); p_10 += 1)
    { /* block id: 11 */
        int8_t *l_33 = &g_15;
        int8_t **l_32 = &l_33;
        int i;
        for (g_11 = 0; (g_11 <= 3); g_11 += 1)
        { /* block id: 14 */
            int8_t *l_14 = &g_15;
            int i;
            g_2[g_11] = (safe_add_func_uint8_t_u_u((g_2[p_10] , g_2[1]), ((*l_14) = (g_2[p_10] || 0UL))));
        }
        l_16++;
        if (p_10)
            continue;
        for (g_15 = 0; (g_15 <= 3); ++g_15)
        { /* block id: 22 */
            uint32_t l_26[9] = {0xF8B874BDL,0xF8B874BDL,0xF8B874BDL,0xF8B874BDL,0xF8B874BDL,0xF8B874BDL,0xF8B874BDL,0xF8B874BDL,0xF8B874BDL};
            int32_t *l_37 = &g_11;
            int i;
            l_26[7] |= (((!(safe_mod_func_int32_t_s_s((p_10 | g_15), ((safe_div_func_uint64_t_u_u(g_2[1], g_11)) , p_10)))) && l_16) | 0xA1L);
            for (g_11 = (-16); (g_11 == (-28)); --g_11)
            { /* block id: 26 */
                int32_t l_29 = 1L;
                int8_t ***l_34 = &l_32;
                g_2[p_10] = (l_29 = g_15);
                g_2[2] = (safe_lshift_func_int16_t_s_u(0L, 1));
                (*l_34) = l_32;
            }
            if (g_15)
                goto lbl_38;
            (*l_37) |= (((((safe_sub_func_int64_t_s_s((p_10 < p_10), l_26[7])) <= g_2[1]) == g_2[1]) != g_2[1]) | g_2[p_10]);
        }
    }
    g_5 = &g_2[1];
    return l_39;
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 4; i++)
    {
        csmith_sink_ = g_2[i];
    }
    csmith_sink_ = g_11;
    csmith_sink_ = g_15;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 10
XXX total union variables: 2

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
   depth: 1, occurrence: 23
   depth: 2, occurrence: 7
   depth: 3, occurrence: 1
   depth: 5, occurrence: 1
   depth: 7, occurrence: 2

XXX total number of pointers: 15

XXX times a variable address is taken: 12
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 6
breakdown:
   depth: 1, occurrence: 6
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 38

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 8
XXX number of pointers point to pointers: 4
XXX number of pointers point to scalars: 11
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 13.3
XXX average alias set size: 1.33

XXX times a non-volatile is read: 30
XXX times a non-volatile is write: 26
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 1
XXX backward jumps: 0

XXX stmts: 22
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 8
   depth: 1, occurrence: 6
   depth: 2, occurrence: 5
   depth: 3, occurrence: 3

XXX percentage a fresh-made variable is used: 26.3
XXX percentage an existing variable is used: 73.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

