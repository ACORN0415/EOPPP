// RTPG_4954: vars=9 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int y13 = 3;
    int x48 = 15855;
    int val59 = 96;
    int tmp36 = 60948;
    int val24 = 42079;
    int tmp28 = -47;
    int lo81 = 32;
    int lo64 = 27139;
    int out2 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        lo81 = xn[i];
        tmp36 = x48 | lo81;
        lo64 = x48;
        x48 = y13 + -14;
        x48 = tmp36 + 75;
        out2 = lo64 - 100;
        lo81 = tmp28;
        x48 = y13 | lo81;
        out2 = tmp36 - lo81;
        yo[i] = out2;
    }
}
int main() { test_func(); return 0; }

