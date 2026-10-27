// RTPG_8018: vars=7 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int tmp12 = 38238;
    int tmp0 = 6;
    int prev32 = 9;
    int cur37 = 3;
    int acc43 = 9;
    int dat86 = 72;
    double tmp43 = 84.29;
    int *ptr = &acc43;
    int i;
    for (i = 0; i < 64; i++) {
        cur37 = xn[i];
        tmp12 = dat86 - 7;
        tmp0 = tmp0 + 1;
        tmp43 = tmp0;
        *ptr = *ptr + 4;
        if (cur37 >= -4) {
        acc43 = tmp43 - acc43;
        }
        yo[i] = tmp0;
    }
}
int main() { test_func(); return 0; }

