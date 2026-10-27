// RTPG_5525: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int tmp57 = 742;
    int dat51 = 87;
    int dat32 = 19;
    int i;
    for (i = 0; i < 32; i++) {
        tmp57 = xn[i];
        tmp57 = dat32 - dat32;
        dat51 = dat32;
        tmp57 = tmp57 - 4;
        yo[i] = dat32;
    }
}
int main() { test_func(); return 0; }

