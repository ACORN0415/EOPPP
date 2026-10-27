// RTPG_61: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int dat17 = 2;
    int lo89 = 42;
    int hi37 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        dat17 = xn[i];
        lo89 = dat17 + hi37;
        hi37 = hi37;
        lo89 = hi37 - 31570;
        lo89 = hi37;
        yo[i] = hi37;
    }
}
int main() { test_func(); return 0; }

