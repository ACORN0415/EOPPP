// RTPG_3645: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int prev51 = 64447;
    int b3 = 76;
    int b90 = 14;
    int i;
    for (i = 0; i < 16; i++) {
        b3 = xn[i];
        b3 = b3;
        b90 = prev51 - 7352;
        b3 = b90;
        prev51 = prev51 - b3;
        yo[i] = prev51;
    }
}
int main() { test_func(); return 0; }

