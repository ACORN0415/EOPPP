// RTPG_2847: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int y8 = 11;
    int sum25 = 7;
    int prev89 = -8;
    int acc91 = 9;
    int dat98 = 1;
    int y3 = 1;
    int prev45 = 42;
    int i;
    for (i = 0; i < 16; i++) {
        acc91 = xn[i];
        y8 = acc91;
        acc91 = acc91 + 5;
        y8 = sum25;
        y3 = prev89 - 10;
        sum25 = dat98 + prev45;
        yo[i] = acc91;
    }
}
int main() { test_func(); return 0; }

