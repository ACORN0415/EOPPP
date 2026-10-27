// RTPG_2674: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int out16 = 5;
    int res2 = 24055;
    int z70 = 56;
    int i;
    for (i = 0; i < 32; i++) {
        out16 = xn[i];
        res2 = res2 + 4;
        out16 = out16 + 3;
        if (res2 == -36) {
        res2 = res2 + 2;
        }
        yo[i] = z70;
    }
}
int main() { test_func(); return 0; }

