// RTPG_5873: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int y34 = 6;
    int z3 = 34;
    int y68 = 29;
    int x97 = 9;
    int x65 = 57302;
    int i;
    for (i = 0; i < 64; i++) {
        x97 = xn[i];
        x65 = z3;
        y34 = y34 - x65;
        y68 = y68 + 3;
        y68 = x65 + x65;
        if (y68 > -27) {
        x65 = x65 - 4;
        }
        yo[i] = y34;
    }
}
int main() { test_func(); return 0; }

