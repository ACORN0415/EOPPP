// RTPG_4823: vars=3 stmts=4
void test_func(void) {
    int hi97 = 42092;
    int v41 = 4;
    int lo34 = 9;
    int i;
    for (i = 0; i < 63; i++) {
        v41 = hi97;
        hi97 = v41 - hi97;
        hi97 = hi97 - v41;
        hi97 = hi97 - 5;
        if (v41 > 92) {
        hi97 = hi97 + 3;
        }
    }
}
int main() { test_func(); return 0; }

