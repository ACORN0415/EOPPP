// RTPG_7788: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int acc48 = -46;
    int a8 = 10840;
    int res68 = 25058;
    int c23 = 6;
    int i;
    for (i = 0; i < 64; i++) {
        c23 = xn[i];
        c23 = acc48 - res68;
        c23 = res68 + a8;
        res68 = acc48 - c23;
        yo[i] = a8;
    }
}
int main() { test_func(); return 0; }

