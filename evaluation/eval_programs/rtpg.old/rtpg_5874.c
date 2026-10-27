// RTPG_5874: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int a20 = -49;
    int lo74 = 1;
    int hi4 = 24;
    int i;
    for (i = 0; i < 32; i++) {
        lo74 = xn[i];
        lo74 = hi4 - hi4;
        hi4 = a20;
        a20 = hi4 + 9;
        hi4 = hi4 - lo74;
        lo74 = hi4 + 31;
        hi4 = hi4 - 5;
        a20 = lo74 - hi4;
        yo[i] = a20;
    }
}
int main() { test_func(); return 0; }

