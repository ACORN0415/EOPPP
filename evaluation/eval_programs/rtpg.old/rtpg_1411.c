// RTPG_1411: vars=7 stmts=3
void test_func(void) {
    int prev96 = 0;
    int x91 = 50048;
    int y23 = 2;
    int y74 = 12;
    int v27 = 9;
    int out91 = 31;
    int hi45 = 29198;
    int *ptr = &hi45;
    int i;
    for (i = 0; i < 32; i++) {
        y23 = v27;
        out91 = out91 + v27;
        y23 = x91 - v27;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

