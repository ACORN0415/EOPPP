// RTPG_5754: vars=3 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    double dat28 = 59.46;
    int c64 = 1;
    float v62 = 38.20;
    int i;
    for (i = 0; i < 16; i++) {
        dat28 = xn[i];
        dat28 = dat28 + -24;
        dat28 = c64;
        yo[i] = dat28;
    }
}
int main() { test_func(); return 0; }

