// RTPG_4907: vars=7 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int z83 = -20;
    float sum46 = 78.04;
    float val96 = 59.32;
    int prev87 = 59151;
    int cnt17 = 51307;
    int tmp20 = 35;
    int dat75 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        val96 = xn[i];
        z83 = z83 + z83;
        z83 = z83 - val96;
        dat75 = dat75 - 3;
        val96 = val96 - dat75;
        z83 = z83 + 5;
        dat75 = dat75 + prev87;
        if (dat75 > 25) {
        prev87 = val96 - cnt17;
        }
        yo[i] = cnt17;
    }
}
int main() { test_func(); return 0; }

