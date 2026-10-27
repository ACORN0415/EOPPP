// RTPG_1182: vars=6 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int lo51 = 59;
    int v45 = -8;
    int x18 = 53;
    int acc56 = 2;
    int hi6 = 6;
    int prev11 = 24824;
    int i;
    for (i = 0; i < 64; i++) {
        acc56 = xn[i];
        x18 = lo51;
        x18 = hi6 - prev11;
        prev11 = prev11 - 4;
        if (acc56 != 4) {
        acc56 = hi6;
        }
        yo[i] = prev11;
    }
}
int main() { test_func(); return 0; }

