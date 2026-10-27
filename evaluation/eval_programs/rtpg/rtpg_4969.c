// RTPG_4969: vars=7 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int dat75 = -20;
    float z83 = 78.04;
    float sum46 = 59.32;
    int tmp20 = 59151;
    int cnt17 = 51307;
    int prev87 = 35;
    int val96 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        sum46 = xn[i];
        dat75 = dat75 + dat75;
        dat75 = dat75 - sum46;
        val96 = val96 - 3;
        sum46 = sum46 - val96;
        dat75 = dat75 + 5;
        val96 = val96 + tmp20;
        if (val96 > 25) {
        tmp20 = sum46 - cnt17;
        }
        yo[i] = cnt17;
    }
}
int main() { test_func(); return 0; }

