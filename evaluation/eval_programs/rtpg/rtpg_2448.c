// RTPG_2448: vars=3 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int out33 = 22;
    int y62 = 10;
    int x4 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        y62 = xn[i];
        x4 = out33;
        x4 = x4 + 1;
        x4 = x4 - 5;
        out33 = y62 - out33;
        y62 = x4 - y62;
        x4 = y62;
        x4 = x4 + x4;
        out33 = out33 - 3;
        x4 = out33;
        yo[i] = x4;
    }
}
int main() { test_func(); return 0; }

