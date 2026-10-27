// RTPG_2595: vars=5 stmts=9
void test_func(void) {
    int b42 = 35343;
    int prev33 = 2;
    int res75 = 66;
    int out28 = 10;
    int c87 = -40;
    int *ptr = &c87;
    int h0 = 21;
    int sv0 = 0;
    int h1 = -8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 73; i++) {
        res75 = c87;
        out28 = out28 + -16;
        prev33 = c87 * 0;
        b42 = prev33;
        c87 = c87 + 4;
        b42 = prev33 / b42;
        res75 = prev33 + 10;
        b42 = res75 + out28;
        b42 = out28 | out28;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

