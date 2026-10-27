// RTPG_1955: vars=7 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int b44 = 1;
    int acc44 = 47182;
    int dat3 = 18;
    int x19 = 12;
    int out63 = 6;
    int y27 = 50415;
    int cur6 = 52;
    int *ptr = &dat3;
    int i;
    for (i = 0; i < 16; i++) {
        out63 = xn[i];
        out63 = x19;
        y27 = b44 - out63;
        cur6 = cur6 - acc44;
        dat3 = acc44 + out63;
        cur6 = cur6 + 2;
        y27 = dat3;
        cur6 = dat3;
        *ptr = *ptr + 3;
        if (acc44 != 19) {
        dat3 = cur6 + 52536;
        }
        yo[i] = b44;
    }
}
int main() { test_func(); return 0; }

