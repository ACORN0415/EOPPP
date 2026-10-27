// RTPG_4730: vars=9 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int y61 = 10;
    int a36 = 55;
    int x45 = -39;
    int res44 = 65522;
    int acc91 = 10;
    int y94 = 39;
    int b86 = 6977;
    int tmp14 = 17074;
    int acc83 = 802;
    int i;
    for (i = 0; i < 64; i++) {
        y94 = xn[i];
        tmp14 = acc91 ^ x45;
        res44 = b86 & y61;
        acc91 = y94 & x45;
        a36 = res44;
        acc83 = x45 + a36;
        if (res44 <= 57) {
        res44 = b86 + x45;
        }
        yo[i] = res44;
    }
}
int main() { test_func(); return 0; }

