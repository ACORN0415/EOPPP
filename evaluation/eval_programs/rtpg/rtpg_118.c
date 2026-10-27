// RTPG_118: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int res19 = 62;
    double lo92 = 22.93;
    float cnt71 = 79.01;
    int i;
    for (i = 0; i < 64; i++) {
        lo92 = xn[i];
        res19 = lo92;
        res19 = cnt71 + res19;
        lo92 = cnt71;
        cnt71 = cnt71 + 3;
        cnt71 = lo92 - res19;
        if (cnt71 != 51) {
        res19 = cnt71;
        }
        yo[i] = res19;
    }
}
int main() { test_func(); return 0; }

