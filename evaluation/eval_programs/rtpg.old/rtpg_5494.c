// RTPG_5494: vars=5 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int prev0 = 52;
    int res42 = 4;
    int cnt16 = 67;
    int x40 = -34;
    int b16 = -27;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res42 = xn[i];
        x40 = prev0 - cnt16;
        res42 = cnt16 + 2;
        prev0 = b16 % cnt16;
        cnt16 = b16;
        x40 = b16 * 32;
        prev0 = b16 + res42;
        cnt16 = res42 | b16;
        b16 = prev0 | b16;
        x40 = cnt16;
        b16 = res42 / prev0;
        cnt16 = cnt16 - 5;
        x40 = x40 + 1;
        if (b16 >= 87) {
        cnt16 = prev0 + x40;
        }
        yo[i] = res42;
    }
}
int main() { test_func(); return 0; }

