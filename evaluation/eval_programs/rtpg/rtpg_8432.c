// RTPG_8432: vars=7 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int prev9 = 32;
    int val80 = -28;
    int x8 = 30;
    int z74 = 20245;
    int c33 = 1;
    int acc11 = -47;
    int acc73 = -41;
    int i;
    for (i = 0; i < 32; i++) {
        z74 = xn[i];
        acc11 = acc73 - z74;
        x8 = val80 - acc73;
        x8 = acc11 - 59425;
        val80 = acc73 + 13;
        x8 = acc73 + 1;
        acc11 = acc11 - 3;
        prev9 = acc73 + -15;
        c33 = c33 + 5;
        c33 = c33 - 3;
        yo[i] = acc73;
    }
}
int main() { test_func(); return 0; }

