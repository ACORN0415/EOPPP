// RTPG_2315: vars=5 stmts=4
void test_func(void) {
    int res77 = 3;
    int x81 = -20;
    int z96 = 35;
    int x94 = 4;
    int cur78 = 11922;
    int i;
    for (i = 0; i < 78; i++) {
        x81 = cur78 - z96;
        cur78 = cur78 + 3;
        res77 = x81 - 10;
        z96 = res77;
    }
}
int main() { test_func(); return 0; }

