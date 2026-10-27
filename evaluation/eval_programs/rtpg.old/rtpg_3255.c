// RTPG_3255: vars=9 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int hi92 = 2;
    int prev99 = 62293;
    int b1 = 5;
    int dat81 = 37;
    int x16 = 6;
    int cur34 = 33150;
    int prev79 = 22;
    int c97 = 3;
    int x35 = 47;
    int *ptr = &cur34;
    int i;
    for (i = 0; i < 64; i++) {
        x35 = xn[i];
        dat81 = prev99 - prev79;
        hi92 = prev99;
        prev99 = x16;
        prev79 = prev79 + hi92;
        prev99 = prev79 - b1;
        prev99 = cur34 - dat81;
        dat81 = cur34 - hi92;
        x35 = b1 - cur34;
        *ptr = *ptr + 3;
        yo[i] = b1;
    }
}
int main() { test_func(); return 0; }

