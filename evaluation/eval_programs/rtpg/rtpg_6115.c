// RTPG_6115: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int prev17 = 7;
    int acc61 = 97;
    int val25 = 2;
    int acc41 = 0;
    int tmp38 = 38156;
    int i;
    for (i = 0; i < 16; i++) {
        acc41 = xn[i];
        acc41 = acc41 + acc41;
        acc41 = acc41;
        acc41 = prev17 + val25;
        tmp38 = acc41 + val25;
        yo[i] = acc61;
    }
}
int main() { test_func(); return 0; }

