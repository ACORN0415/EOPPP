// RTPG_9583: vars=6 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int y0 = 2;
    int b82 = 39206;
    int tmp94 = 2;
    int prev57 = 6;
    int out97 = 8;
    int b87 = 54;
    int i;
    for (i = 0; i < 32; i++) {
        prev57 = xn[i];
        prev57 = prev57 ^ b82;
        b82 = prev57 ^ y0;
        if (y0 >= -18) {
        y0 = out97;
        }
        yo[i] = y0;
    }
}
int main() { test_func(); return 0; }

