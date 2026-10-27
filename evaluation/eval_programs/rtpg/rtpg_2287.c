// RTPG_2287: vars=4 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int x10 = 1;
    int z97 = 11014;
    int v77 = 3351;
    int cnt33 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        x10 = xn[i];
        v77 = z97 - x10;
        cnt33 = v77 & x10;
        v77 = v77;
        x10 = v77 - cnt33;
        cnt33 = v77 / z97;
        z97 = x10 + 40248;
        cnt33 = cnt33 - v77;
        v77 = x10 - v77;
        z97 = v77 / x10;
        v77 = cnt33 + x10;
        z97 = v77 - cnt33;
        cnt33 = z97 + 56276;
        yo[i] = x10;
    }
}
int main() { test_func(); return 0; }

