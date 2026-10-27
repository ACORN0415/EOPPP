// RTPG_7577: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int y68 = 3;
    double prev88 = 65.06;
    int tmp4 = 1;
    double v38 = 26.94;
    int cur0 = 1;
    int *ptr = &v38;
    int i;
    for (i = 0; i < 32; i++) {
        prev88 = xn[i];
        v38 = prev88 - 79;
        v38 = v38 - prev88;
        prev88 = y68 - cur0;
        prev88 = prev88 - 4;
        *ptr = *ptr + 1;
        yo[i] = tmp4;
    }
}
int main() { test_func(); return 0; }

