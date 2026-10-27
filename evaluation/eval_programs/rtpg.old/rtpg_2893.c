// RTPG_2893: vars=5 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int hi63 = 40;
    int hi94 = 67;
    int res73 = 8;
    int hi42 = -37;
    int acc35 = 45;
    int i;
    for (i = 0; i < 64; i++) {
        res73 = xn[i];
        acc35 = acc35;
        res73 = res73 - 5;
        hi42 = hi42;
        hi42 = hi42 - hi94;
        hi63 = hi94;
        acc35 = hi63 + 57;
        hi94 = hi94 + acc35;
        acc35 = hi42 + -1;
        hi94 = hi94 - 4;
        hi63 = hi94 + 16;
        yo[i] = hi42;
    }
}
int main() { test_func(); return 0; }

