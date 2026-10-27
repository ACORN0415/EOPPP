// RTPG_4637: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int out66 = 2;
    int hi0 = -30;
    int b28 = 42971;
    int cnt80 = 7;
    int *ptr = &b28;
    int i;
    for (i = 0; i < 16; i++) {
        cnt80 = xn[i];
        hi0 = cnt80 - 949;
        out66 = out66 - hi0;
        out66 = cnt80 + hi0;
        out66 = b28;
        *ptr = *ptr + 2;
        yo[i] = out66;
    }
}
int main() { test_func(); return 0; }

