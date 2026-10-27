// RTPG_5754: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    float tmp35 = 77.67;
    int a80 = 42;
    double lo23 = 45.05;
    double b17 = 44.69;
    int i;
    for (i = 0; i < 16; i++) {
        b17 = xn[i];
        lo23 = b17 + 30546;
        a80 = b17 + tmp35;
        tmp35 = a80 - -17;
        lo23 = lo23 - 1;
        tmp35 = a80;
        yo[i] = a80;
    }
}
int main() { test_func(); return 0; }

