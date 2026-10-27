// RTPG_2260: vars=4 stmts=9
void test_func(void) {
    int c12 = 79;
    int hi92 = 26;
    int v96 = 28;
    int cnt32 = 19;
    int i;
    for (i = 0; i < 86; i++) {
        c12 = v96;
        v96 = cnt32 - c12;
        hi92 = c12 - cnt32;
        c12 = v96 - 4;
        v96 = cnt32;
        v96 = v96 - 1;
        v96 = v96 - 1;
        hi92 = hi92;
        hi92 = v96;
    }
}
int main() { test_func(); return 0; }

