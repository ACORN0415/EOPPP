// RTPG_1533: vars=5 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int val44 = 732;
    int val7 = 4;
    int tmp11 = 2;
    int a37 = 34;
    int res16 = 18896;
    int i;
    for (i = 0; i < 64; i++) {
        a37 = xn[i];
        tmp11 = res16 + a37;
        tmp11 = a37 - 34;
        val7 = res16 - val7;
        tmp11 = val7 + 9681;
        tmp11 = val7 - a37;
        a37 = val7 + val44;
        if (val7 == 22) {
        tmp11 = val7 + tmp11;
        }
        yo[i] = val7;
    }
}
int main() { test_func(); return 0; }

