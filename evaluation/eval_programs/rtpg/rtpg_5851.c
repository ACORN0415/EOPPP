// RTPG_5851: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int y63 = 55620;
    double a62 = 77.72;
    double cur14 = 62.07;
    int dat94 = 10;
    int prev11 = 48392;
    int prev66 = 87;
    int cur80 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        a62 = xn[i];
        a62 = a62 - 3;
        dat94 = dat94 + 3;
        cur14 = cur14;
        dat94 = prev11;
        a62 = a62 + prev11;
        if (prev66 != -1) {
        dat94 = prev11 - a62;
        }
        yo[i] = a62;
    }
}
int main() { test_func(); return 0; }

