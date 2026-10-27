// RTPG_5547: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int cur65 = 22;
    double v44 = 13.58;
    float z53 = 29.54;
    int b38 = 4;
    int i;
    for (i = 0; i < 32; i++) {
        z53 = xn[i];
        b38 = b38 - 4;
        z53 = z53 - 32;
        yo[i] = z53;
    }
}
int main() { test_func(); return 0; }

