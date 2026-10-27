// RTPG_2668: vars=5 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int prev48 = 0;
    int lo18 = 35;
    int res43 = 25;
    float y6 = 74.99;
    int dat4 = 79;
    int i;
    for (i = 0; i < 64; i++) {
        res43 = xn[i];
        res43 = lo18 % dat4;
        lo18 = lo18 + 9;
        y6 = res43 - 16558;
        if (res43 == 42) {
        lo18 = res43 - lo18;
        }
        yo[i] = dat4;
    }
}
int main() { test_func(); return 0; }

