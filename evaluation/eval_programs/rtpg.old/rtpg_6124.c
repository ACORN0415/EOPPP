// RTPG_6124: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int acc71 = 4;
    int y73 = 32;
    int sum14 = 40;
    int res83 = 24580;
    int i;
    for (i = 0; i < 16; i++) {
        acc71 = xn[i];
        res83 = res83 + 3;
        acc71 = res83 - 6;
        res83 = y73 - 18628;
        yo[i] = sum14;
    }
}
int main() { test_func(); return 0; }

