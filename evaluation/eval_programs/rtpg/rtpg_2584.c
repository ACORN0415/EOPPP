// RTPG_2584: vars=5 stmts=9
void test_func(void) {
    int prev33 = 35343;
    int res75 = 2;
    int c87 = 66;
    int b42 = 10;
    int out28 = -40;
    int *ptr = &out28;
    int h0 = 21;
    int sv0 = 0;
    int h1 = -8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 73; i++) {
        c87 = out28;
        b42 = b42 + -16;
        res75 = out28 * 0;
        prev33 = res75;
        out28 = out28 + 4;
        prev33 = res75 / prev33;
        c87 = res75 + 10;
        prev33 = c87 + b42;
        prev33 = b42 | out28;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

