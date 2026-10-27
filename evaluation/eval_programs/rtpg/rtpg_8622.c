// RTPG_8622: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int hi61 = 20;
    int a23 = -42;
    int x25 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        a23 = xn[i];
        a23 = hi61 + 53249;
        a23 = a23 - 5;
        a23 = a23 - x25;
        yo[i] = a23;
    }
}
int main() { test_func(); return 0; }

