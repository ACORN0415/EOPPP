// RTPG_2791: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int b42 = 47799;
    int cnt65 = -26;
    double res33 = 0.64;
    int i;
    for (i = 0; i < 16; i++) {
        res33 = xn[i];
        cnt65 = b42 + 19;
        b42 = b42 - 2;
        res33 = cnt65 + -45;
        yo[i] = res33;
    }
}
int main() { test_func(); return 0; }

