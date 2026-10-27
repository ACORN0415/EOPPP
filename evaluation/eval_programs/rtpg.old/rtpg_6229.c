// RTPG_6229: vars=6 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int tmp52 = 95;
    int z51 = 2;
    int prev84 = -18;
    int x99 = 5;
    int prev2 = 48193;
    int res39 = 84;
    int i;
    for (i = 0; i < 64; i++) {
        x99 = xn[i];
        prev2 = res39 | prev84;
        prev84 = res39;
        prev2 = tmp52 - z51;
        z51 = z51 - 5;
        tmp52 = tmp52 % prev2;
        z51 = tmp52 / tmp52;
        res39 = tmp52;
        tmp52 = res39;
        yo[i] = prev2;
    }
}
int main() { test_func(); return 0; }

