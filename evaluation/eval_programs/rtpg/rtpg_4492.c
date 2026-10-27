// RTPG_4492: vars=3 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int tmp81 = 7;
    int dat88 = 6;
    int val87 = 24398;
    int i;
    for (i = 0; i < 16; i++) {
        dat88 = xn[i];
        dat88 = dat88 + 3;
        tmp81 = tmp81;
        dat88 = tmp81 + dat88;
        tmp81 = tmp81 + 9;
        dat88 = dat88 + tmp81;
        val87 = val87 + dat88;
        val87 = tmp81 - dat88;
        dat88 = val87 + tmp81;
        dat88 = dat88 - val87;
        dat88 = val87 + 53708;
        if (tmp81 >= 60) {
        dat88 = val87 + tmp81;
        }
        yo[i] = tmp81;
    }
}
int main() { test_func(); return 0; }

