// RTPG_3151: vars=9 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int sum98 = 7;
    int sum23 = -15;
    int dat15 = 56;
    int acc93 = 81;
    int tmp46 = 75;
    int prev2 = 15;
    int val41 = 25;
    int z62 = 46;
    int c19 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        z62 = xn[i];
        sum23 = sum23 + 2;
        sum23 = sum23 + 2;
        acc93 = dat15 + sum23;
        prev2 = c19 - z62;
        c19 = c19;
        acc93 = val41 - dat15;
        val41 = tmp46;
        dat15 = tmp46 + acc93;
        yo[i] = tmp46;
    }
}
int main() { test_func(); return 0; }

