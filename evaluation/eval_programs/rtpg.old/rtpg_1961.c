// RTPG_1961: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int prev65 = 6;
    int c23 = 1;
    int tmp71 = 40;
    int *ptr = &tmp71;
    int h0 = 20344;
    int sv0 = 0;
    int h1 = 16298;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        tmp71 = xn[i];
        tmp71 = c23;
        tmp71 = c23 + tmp71;
        prev65 = prev65 - 4;
        prev65 = prev65 | c23;
        c23 = tmp71;
        *ptr = *ptr + 1;
        yo[i] = c23;
    }
}
int main() { test_func(); return 0; }

