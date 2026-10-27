/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 2349113276 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      2349113276
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   unsigned f0 : 17;
};

/* --- GLOBAL VARIABLES --- */
static struct S1 g_6 = {73};
static int32_t g_8 = 0x42760385L;
static int32_t *g_11 = &g_8;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t * func_2(int32_t * p_3, int32_t  p_4, int64_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_8
 * writes: g_11 g_8
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_7 = &g_8;
    int32_t **l_36 = &l_7;
    (*l_36) = func_2((g_6 , l_7), (*l_7), (*l_7));
    return g_8;
}


/* ------------------------------------------ */
/* 
 * reads : g_6.f0 g_8
 * writes: g_11 g_8
 */
static int32_t * func_2(int32_t * p_3, int32_t  p_4, int64_t  p_5)
{ /* block id: 1 */
    int32_t *l_9 = (void*)0;
    int32_t **l_10[7] = {&l_9,&l_9,&l_9,&l_9,&l_9,&l_9,&l_9};
    int i;
    g_11 = l_9;
    if (g_6.f0)
    { /* block id: 3 */
        int32_t *l_12 = &g_8;
        const uint64_t l_20 = 0UL;
        (*l_12) = (((((void*)0 == l_12) == (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((!(safe_mod_func_int32_t_s_s(l_20, 0x2B058EFAL))) , (*l_12)), 0xB56411D7L)), p_4))) ^ 1L) , 0x7F4A7D2AL);
    }
    else
    { /* block id: 5 */
        int8_t l_22 = 0xABL;
        int32_t l_23 = 0x87B8B0D5L;
        int32_t l_33 = 0L;
        (*p_3) = (safe_unary_minus_func_int16_t_s((g_8 , 0x5761L)));
        l_23 &= ((l_22 <= g_8) , 0x1943EC3EL);
        for (l_22 = 4; (l_22 <= 16); l_22 = safe_add_func_int8_t_s_s(l_22, 3))
        { /* block id: 10 */
            struct S1 l_28 = {56};
            struct S1 *l_29 = &l_28;
            int32_t *l_35 = &g_8;
            (*p_3) = ((g_6.f0 && g_8) & (safe_lshift_func_uint16_t_u_s(((((*l_29) = l_28) , l_23) != 0xF1563CFEL), 13)));
            for (l_23 = 0; (l_23 < (-25)); l_23--)
            { /* block id: 15 */
                uint16_t l_32 = 65535UL;
                int32_t ***l_34 = &l_10[1];
                (*p_3) = l_32;
                l_33 &= 1L;
                (*l_34) = &g_11;
                if ((*p_3))
                    break;
            }
            return l_35;
        }
        return &g_8;
    }
    (*p_3) ^= 0xB2213AABL;
    return &g_8;
}




/* ---------------------------------------- */
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_6.f0;
    csmith_sink_ = g_8;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 10
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 2

XXX max expression depth: 9
breakdown:
   depth: 1, occurrence: 21
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 5, occurrence: 1
   depth: 7, occurrence: 1
   depth: 9, occurrence: 1

XXX total number of pointers: 11

XXX times a variable address is taken: 13
XXX times a pointer is dereferenced on RHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is dereferenced on LHS: 8
breakdown:
   depth: 1, occurrence: 8
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 32

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 16
XXX number of pointers point to pointers: 3
XXX number of pointers point to scalars: 7
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 18.2
XXX average alias set size: 1.09

XXX times a non-volatile is read: 27
XXX times a non-volatile is write: 21
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 18
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 5
   depth: 2, occurrence: 3
   depth: 3, occurrence: 4

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

