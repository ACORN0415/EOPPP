/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 2332526964 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      2332526964
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const unsigned f1 : 21;
   int32_t  f2;
   int8_t  f3;
   unsigned f4 : 12;
   const uint8_t  f5;
   uint16_t  f6;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_4[10][4] = {{0L,0L,(-1L),0L},{0xF7FBF212L,9L,(-1L),(-1L)},{7L,0x415D7249L,0L,(-2L)},{0xC1188E17L,0L,(-2L),7L},{0xC1188E17L,0x3203BD65L,0L,0L},{7L,7L,(-1L),0xAED6B657L},{0xF7FBF212L,(-1L),(-1L),9L},{0L,0xA754320EL,(-8L),(-1L)},{(-1L),0xA754320EL,7L,9L},{0xA754320EL,(-1L),0xA754320EL,0xAED6B657L}};
static int32_t *g_10 = &g_4[7][0];
static int16_t g_18[5] = {0xB0BAL,0xB0BAL,0xB0BAL,0xB0BAL,0xB0BAL};
static int16_t g_20 = (-6L);
static int32_t g_31[9] = {0x27FA52E9L,0x1BF520F0L,0x27FA52E9L,0x1BF520F0L,0x27FA52E9L,0x1BF520F0L,0x27FA52E9L,0x1BF520F0L,0x27FA52E9L};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static const int32_t  func_2(int32_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_18 g_20 g_10 g_31
 * writes: g_10 g_18 g_20 g_4 g_31
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_30 = &g_31[6];
    (*l_30) |= func_2(g_4[6][1]);
    return (*l_30);
}


/* ------------------------------------------ */
/* 
 * reads : g_4 g_18 g_20 g_10
 * writes: g_10 g_18 g_20 g_4
 */
static const int32_t  func_2(int32_t  p_3)
{ /* block id: 1 */
    int32_t *l_8 = &g_4[5][1];
    int32_t **l_9[2][2];
    struct S0 l_11 = {0x3B1DAB55L,673,0xA4C82104L,9L,1,0x0DL,0x93BAL};
    uint8_t l_28 = 253UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_9[i][j] = &l_8;
    }
    for (p_3 = (-1); (p_3 <= (-7)); --p_3)
    { /* block id: 4 */
        uint16_t l_7 = 65529UL;
        if (l_7)
            break;
    }
    g_10 = l_8;
    for (p_3 = 1; (p_3 >= 0); p_3 -= 1)
    { /* block id: 10 */
        uint64_t l_13 = 18446744073709551614UL;
        int32_t *l_29[4];
        int i;
        for (i = 0; i < 4; i++)
            l_29[i] = &g_4[6][2];
        if (((l_11 , (0xD6C5L != ((+p_3) >= (*l_8)))) || 0x98AAC1E0F758FC56LL))
        { /* block id: 11 */
            const int8_t l_16 = (-9L);
            g_10 = &g_4[6][1];
            if (l_13)
                break;
            for (l_11.f0 = 0; (l_11.f0 <= 1); l_11.f0 += 1)
            { /* block id: 16 */
                int16_t *l_17 = &g_18[4];
                int16_t *l_19 = &g_20;
                int32_t l_21 = 0x7268F57FL;
                int i, j;
                if (p_3)
                    break;
                l_21 &= (safe_div_func_int64_t_s_s(l_16, (l_13 | ((*l_19) ^= ((*l_17) ^= g_4[4][2])))));
            }
            (*l_8) = ((safe_add_func_int64_t_s_s((0x2FBF3F079038991FLL | (((((safe_rshift_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((p_3 , &g_4[6][1]) != (void*)0), 1L)) , l_28), p_3)) > g_4[5][0]) | l_16) , p_3) | p_3)), p_3)) , 0x0953B224L);
        }
        else
        { /* block id: 23 */
            return l_13;
        }
        (*g_10) = (l_29[2] == &g_4[6][1]);
        return p_3;
    }
    return (*g_10);
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            csmith_sink_ = g_4[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_18[i];
    }
    csmith_sink_ = g_20;
    for (i = 0; i < 9; i++)
    {
        csmith_sink_ = g_31[i];
    }
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 9
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 13
breakdown:
   depth: 1, occurrence: 15
   depth: 2, occurrence: 5
   depth: 5, occurrence: 2
   depth: 13, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 10
XXX times a pointer is dereferenced on RHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is dereferenced on LHS: 5
breakdown:
   depth: 1, occurrence: 5
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 1
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 27

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 14
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 30
XXX times a non-volatile is write: 16
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 17
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 4
   depth: 2, occurrence: 5
   depth: 3, occurrence: 2

XXX percentage a fresh-made variable is used: 25.6
XXX percentage an existing variable is used: 74.4
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

