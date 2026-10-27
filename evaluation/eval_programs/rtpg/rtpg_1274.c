// RTPG_1274: vars=10 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int prev83 = 73;
    int b57 = 78;
    int res89 = 19180;
    int a31 = -41;
    int prev31 = 43;
    int res11 = 20;
    int a40 = 20;
    int y12 = 38;
    int prev22 = 19953;
    int cnt15 = 14409;
    int *ptr = &prev31;
    int i;
    for (i = 0; i < 64; i++) {
        prev22 = xn[i];
        prev31 = cnt15;
        res11 = prev31;
        prev22 = prev22 - 4;
        prev22 = cnt15 - prev31;
        res11 = prev22 + 1;
        y12 = res89 + prev83;
        cnt15 = res89;
        *ptr = *ptr + 4;
        yo[i] = b57;
    }
}
int main() { test_func(); return 0; }

