// RTPG_4654: vars=7 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int sum40 = 67;
    int lo55 = 14916;
    int lo58 = 88;
    int out14 = 25633;
    int a68 = 1;
    int dat28 = 99;
    int val2 = 46;
    int i;
    for (i = 0; i < 16; i++) {
        val2 = xn[i];
        sum40 = sum40 - a68;
        dat28 = out14;
        out14 = val2;
        dat28 = dat28 + 5;
        lo58 = sum40 - sum40;
        a68 = val2 - 4;
        sum40 = a68 - sum40;
        a68 = val2 + out14;
        if (val2 < 12) {
        lo58 = dat28 - sum40;
        }
        yo[i] = a68;
    }
}
int main() { test_func(); return 0; }

