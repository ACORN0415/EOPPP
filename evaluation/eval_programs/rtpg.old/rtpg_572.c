// RTPG_572: vars=10 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int b40 = 5;
    int prev88 = 17;
    int dat83 = 85;
    int y39 = 1;
    int c45 = -27;
    int a41 = 1;
    int x31 = 23717;
    int acc71 = 39;
    int out65 = 8;
    int tmp77 = 34531;
    int i;
    for (i = 0; i < 32; i++) {
        prev88 = xn[i];
        prev88 = b40 + out65;
        b40 = c45 + a41;
        a41 = out65;
        x31 = a41 + out65;
        a41 = prev88;
        prev88 = out65 + y39;
        yo[i] = b40;
    }
}
int main() { test_func(); return 0; }

