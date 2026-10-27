// RTPG_931: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int acc80 = 26399;
    int hi49 = 11;
    int prev71 = 9;
    int out27 = 9910;
    int tmp38 = 19790;
    int i;
    for (i = 0; i < 32; i++) {
        hi49 = xn[i];
        acc80 = tmp38;
        tmp38 = prev71 | tmp38;
        if (prev71 != 56) {
        out27 = prev71 - 1;
        }
        yo[i] = acc80;
    }
}
int main() { test_func(); return 0; }

