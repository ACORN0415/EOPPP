// RTPG_8395: vars=5 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    float c85 = 0.90;
    int cnt77 = 27284;
    float acc15 = 88.91;
    double out16 = 64.50;
    int out74 = 24682;
    int i;
    for (i = 0; i < 64; i++) {
        acc15 = xn[i];
        out74 = acc15 + out16;
        acc15 = out16 + c85;
        cnt77 = c85 + c85;
        c85 = c85 + out74;
        cnt77 = c85 - cnt77;
        cnt77 = c85 + acc15;
        cnt77 = out74 - out16;
        out74 = out16 - 8;
        yo[i] = cnt77;
    }
}
int main() { test_func(); return 0; }

