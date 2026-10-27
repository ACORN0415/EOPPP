// RTPG_735: vars=7 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int out0 = 32;
    int x12 = 2;
    int prev76 = 1;
    int res87 = -32;
    int cur57 = -29;
    int a99 = 33;
    int lo20 = 21;
    int *ptr = &cur57;
    int i;
    for (i = 0; i < 64; i++) {
        res87 = xn[i];
        res87 = x12 + 1694;
        x12 = prev76 - lo20;
        *ptr = *ptr + 5;
        yo[i] = out0;
    }
}
int main() { test_func(); return 0; }

