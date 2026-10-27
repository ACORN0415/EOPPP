// RTPG_562: vars=10 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int out65 = 5;
    int dat83 = 17;
    int c45 = 85;
    int a41 = 1;
    int tmp77 = -27;
    int y39 = 1;
    int prev88 = 23717;
    int b40 = 39;
    int x31 = 8;
    int acc71 = 34531;
    int i;
    for (i = 0; i < 32; i++) {
        dat83 = xn[i];
        dat83 = out65 + x31;
        out65 = tmp77 + y39;
        y39 = x31;
        prev88 = y39 + x31;
        y39 = dat83;
        dat83 = x31 + a41;
        yo[i] = out65;
    }
}
int main() { test_func(); return 0; }

