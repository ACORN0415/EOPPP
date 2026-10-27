// RTPG_153: vars=5 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int cur31 = 53542;
    int hi84 = 43674;
    int cur51 = 2;
    int x10 = 40;
    int out16 = 40;
    int i;
    for (i = 0; i < 16; i++) {
        cur31 = xn[i];
        hi84 = out16 - cur51;
        cur31 = cur31 - x10;
        yo[i] = x10;
    }
}
int main() { test_func(); return 0; }

