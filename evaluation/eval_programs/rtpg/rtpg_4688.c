// RTPG_4688: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int cnt80 = 2;
    int b28 = -30;
    int out66 = 42971;
    int hi0 = 7;
    int *ptr = &out66;
    int i;
    for (i = 0; i < 16; i++) {
        hi0 = xn[i];
        b28 = hi0 - 949;
        cnt80 = cnt80 - b28;
        cnt80 = hi0 + b28;
        cnt80 = out66;
        *ptr = *ptr + 2;
        yo[i] = cnt80;
    }
}
int main() { test_func(); return 0; }

