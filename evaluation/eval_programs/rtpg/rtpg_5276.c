// RTPG_5276: vars=3 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int y69 = 2;
    int tmp14 = 61762;
    int v77 = 42037;
    int i;
    for (i = 0; i < 64; i++) {
        y69 = xn[i];
        tmp14 = y69;
        tmp14 = v77 - 59;
        tmp14 = tmp14 + y69;
        y69 = tmp14;
        tmp14 = y69 + v77;
        tmp14 = tmp14 - 62929;
        v77 = v77 - tmp14;
        yo[i] = tmp14;
    }
}
int main() { test_func(); return 0; }

