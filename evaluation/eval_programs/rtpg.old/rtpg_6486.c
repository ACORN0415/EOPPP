// RTPG_6486: vars=3 stmts=8
void test_func(void) {
    int val56 = 4;
    int z97 = 16226;
    int out0 = 56366;
    int *ptr = &val56;
    int i;
    for (i = 0; i < 64; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        out0 = val56 + 6;
        val56 = val56 - z97;
        val56 = val56 - 1;
        out0 = z97;
        out0 = out0 + val56;
        val56 = z97 + out0;
        out0 = val56 - out0;
        z97 = val56 + 9;
        }
    }
}
int main() { test_func(); return 0; }

