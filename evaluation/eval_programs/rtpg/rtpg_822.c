// RTPG_822: vars=9 stmts=2
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int y20 = 20342;
    int z84 = 8;
    int acc38 = 5;
    int lo19 = 61568;
    int v61 = 6;
    int v74 = 33667;
    int c85 = 5;
    int out1 = 0;
    int out16 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        z84 = xn[i];
        y20 = xn[idx_arr[i]];
        out16 = out16 + z84;
        out1 = c85 + out1;
        if (lo19 != -40) {
        v74 = z84 - c85;
        }
        yo[i] = y20;
    }
}
int main() { test_func(); return 0; }

