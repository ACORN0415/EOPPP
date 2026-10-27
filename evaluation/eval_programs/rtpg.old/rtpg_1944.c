// RTPG_1944: vars=6 stmts=5
void test_func(void) {
    int a95 = 10;
    int prev87 = 8255;
    int tmp58 = 16;
    int c43 = -24;
    int out84 = 26692;
    int acc76 = 10;
    int i;
    for (i = 0; i < 27; i++) {
        acc76 = acc76 + 3;
        tmp58 = c43 / a95;
        a95 = acc76 + c43;
        c43 = c43;
        a95 = a95 + 3;
    }
}
int main() { test_func(); return 0; }

