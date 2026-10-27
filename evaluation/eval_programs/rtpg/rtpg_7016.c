// RTPG_7016: vars=4 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int a17 = 12791;
    int acc1 = 24;
    int b7 = -21;
    int y23 = 99;
    int i;
    for (i = 0; i < 64; i++) {
        y23 = xn[i];
        a17 = b7 - a17;
        acc1 = y23 | a17;
        acc1 = y23 & acc1;
        a17 = b7 - acc1;
        if (y23 <= -7) {
        a17 = a17;
        }
        yo[i] = a17;
    }
}
int main() { test_func(); return 0; }

