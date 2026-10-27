// RTPG_5370: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int y23 = -46;
    int dat91 = -11;
    int cnt14 = 4351;
    int v6 = 33;
    int dat9 = 50952;
    int c23 = 4;
    int i;
    for (i = 0; i < 32; i++) {
        c23 = xn[i];
        v6 = v6 + 4;
        cnt14 = dat9 % c23;
        c23 = dat91 ^ cnt14;
        cnt14 = cnt14 + 1;
        dat91 = c23;
        yo[i] = cnt14;
    }
}
int main() { test_func(); return 0; }

