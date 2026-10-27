// RTPG_7085: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int a71 = 79;
    double res82 = 39.01;
    int cur94 = 50959;
    int i;
    for (i = 0; i < 64; i++) {
        res82 = xn[i];
        cur94 = cur94 - 2;
        res82 = res82 + 1;
        yo[i] = res82;
    }
}
int main() { test_func(); return 0; }

