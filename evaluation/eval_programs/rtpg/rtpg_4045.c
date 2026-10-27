// RTPG_4045: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int tmp35 = 44;
    int a90 = 43;
    int a69 = 54763;
    int x12 = -43;
    int i;
    for (i = 0; i < 32; i++) {
        a90 = xn[i];
        x12 = x12 + 4;
        x12 = x12 - 4;
        a90 = x12 + 7;
        yo[i] = tmp35;
    }
}
int main() { test_func(); return 0; }

