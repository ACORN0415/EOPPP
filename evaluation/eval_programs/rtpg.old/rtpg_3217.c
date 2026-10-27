// RTPG_3217: vars=4 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int prev5 = 3;
    int acc11 = 6;
    int y13 = 25;
    int acc35 = -2;
    int i;
    for (i = 0; i < 32; i++) {
        acc11 = xn[i];
        acc11 = acc11 + 3;
        acc11 = prev5 + 29;
        y13 = acc35 - acc11;
        acc11 = acc35 + acc35;
        acc35 = y13 - acc11;
        y13 = prev5 + 90;
        acc35 = acc35 - acc35;
        acc11 = acc35 - acc11;
        yo[i] = prev5;
    }
}
int main() { test_func(); return 0; }

