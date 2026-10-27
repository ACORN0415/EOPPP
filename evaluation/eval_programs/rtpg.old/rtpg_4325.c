// RTPG_4325: vars=3 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int a67 = 42;
    int cnt98 = 15;
    double lo73 = 69.24;
    int i;
    for (i = 0; i < 16; i++) {
        a67 = xn[i];
        a67 = a67 - 3;
        a67 = lo73;
        yo[i] = cnt98;
    }
}
int main() { test_func(); return 0; }

