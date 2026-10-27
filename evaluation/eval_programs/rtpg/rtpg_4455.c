// RTPG_4455: vars=7 stmts=8
void test_func(void) {
    int out23 = 12;
    int v76 = 18641;
    int prev58 = 7;
    int b72 = 6535;
    int cnt11 = 17212;
    int cur95 = 58206;
    int out68 = 15;
    int *ptr = &b72;
    int i;
    for (i = 0; i < 6; i++) {
        b72 = cnt11;
        cur95 = prev58 - 6;
        prev58 = b72 - 1;
        out68 = b72 + cur95;
        cnt11 = prev58 + b72;
        out23 = b72 + 1;
        cur95 = out23 - out68;
        cur95 = cur95 - b72;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

