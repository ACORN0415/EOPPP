// RTPG_1414: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int b50 = -44;
    int lo10 = 4;
    int tmp84 = 1;
    int a96 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        lo10 = xn[i];
        lo10 = a96 + 19913;
        a96 = b50 - a96;
        a96 = lo10 - a96;
        b50 = lo10 + 42;
        yo[i] = lo10;
    }
}
int main() { test_func(); return 0; }

