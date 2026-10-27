// RTPG_359: vars=4 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int acc76 = 39;
    int dat21 = 57540;
    int y74 = 58;
    int c8 = 46386;
    int i;
    for (i = 0; i < 32; i++) {
        y74 = xn[i];
        c8 = c8 - y74;
        y74 = c8 + y74;
        y74 = c8 - acc76;
        c8 = c8 - dat21;
        acc76 = y74 + y74;
        dat21 = c8;
        c8 = y74 + c8;
        y74 = c8 - y74;
        acc76 = acc76 + 3;
        c8 = acc76 - y74;
        dat21 = dat21 + 5;
        yo[i] = y74;
    }
}
int main() { test_func(); return 0; }

