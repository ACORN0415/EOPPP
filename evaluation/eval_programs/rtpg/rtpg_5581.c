// RTPG_5581: vars=5 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int prev0 = 52;
    int b16 = 4;
    int res42 = 67;
    int x40 = -34;
    int cnt16 = -27;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        b16 = xn[i];
        x40 = prev0 - res42;
        b16 = res42 + 2;
        prev0 = cnt16 % res42;
        res42 = cnt16;
        x40 = cnt16 * 32;
        prev0 = cnt16 + b16;
        res42 = b16 ^ cnt16;
        x40 = x40 - 2;
        x40 = res42;
        cnt16 = b16 / prev0;
        res42 = res42 - 5;
        x40 = x40 + 1;
        if (cnt16 >= 87) {
        res42 = prev0 + x40;
        }
        yo[i] = b16;
    }
}
int main() { test_func(); return 0; }

