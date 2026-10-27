// RTPG_7150: vars=7 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int dat80 = 5;
    int acc27 = 82;
    int out26 = 93;
    int lo21 = 8;
    int x10 = 62179;
    int y38 = 40;
    int res32 = -10;
    int *ptr = &res32;
    int i;
    for (i = 0; i < 64; i++) {
        res32 = xn[i];
        y38 = lo21;
        lo21 = x10;
        y38 = acc27 - y38;
        *ptr = *ptr + 2;
        if (lo21 == 4) {
        acc27 = acc27 + 4;
        }
        yo[i] = lo21;
    }
}
int main() { test_func(); return 0; }

