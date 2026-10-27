// RTPG_8469: vars=3 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int b19 = 24929;
    int sum99 = 94;
    int sum30 = 0;
    int *ptr = &sum30;
    int i;
    for (i = 0; i < 64; i++) {
        sum30 = xn[i];
        sum99 = sum99 - sum30;
        sum30 = sum99 - b19;
        sum30 = b19 + 73;
        sum30 = sum99 + 16117;
        sum99 = b19 - b19;
        b19 = b19 + 4;
        sum30 = sum30 - 21121;
        sum30 = b19 + 60865;
        *ptr = *ptr + 5;
        yo[i] = sum30;
    }
}
int main() { test_func(); return 0; }

