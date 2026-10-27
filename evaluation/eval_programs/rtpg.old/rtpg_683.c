// RTPG_683: vars=8 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int c31 = 9;
    double tmp49 = 6.84;
    int cnt3 = 41487;
    int sum35 = 2;
    int acc77 = 4;
    float cur10 = 73.20;
    float cnt32 = 24.30;
    double lo8 = 65.05;
    int *ptr = &cnt32;
    int i;
    for (i = 0; i < 16; i++) {
        c31 = xn[i];
        tmp49 = c31;
        lo8 = cur10 & acc77;
        sum35 = sum35 + 1;
        cnt3 = tmp49 - c31;
        cnt32 = cnt32;
        cnt3 = acc77;
        cnt3 = cur10 - cnt32;
        *ptr = *ptr + 2;
        yo[i] = lo8;
    }
done:
    tmp49 = 0;
}
int main() { test_func(); return 0; }

