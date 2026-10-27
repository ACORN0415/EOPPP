// RTPG_3091: vars=6 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int lo84 = 63191;
    int b32 = -43;
    int res33 = 51130;
    int x38 = 4;
    int acc97 = -5;
    int c62 = 10;
    int *ptr = &acc97;
    int i;
    for (i = 0; i < 64; i++) {
        lo84 = xn[i];
        acc97 = acc97 - 4;
        lo84 = b32 - res33;
        c62 = c62 + 1;
        c62 = x38;
        lo84 = lo84 + 3;
        x38 = x38 - lo84;
        x38 = x38 + 3;
        x38 = res33 + 6;
        x38 = acc97 + 4;
        acc97 = res33 - 33785;
        res33 = x38;
        x38 = x38 + 5;
        *ptr = *ptr + 3;
        if (x38 > 68) {
        b32 = acc97 + c62;
        }
        yo[i] = res33;
    }
}
int main() { test_func(); return 0; }

