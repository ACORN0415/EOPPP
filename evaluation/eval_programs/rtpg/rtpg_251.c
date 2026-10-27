// RTPG_251: vars=7 stmts=8
void test_func(void) {
    int hi50 = 2;
    int dat46 = 7;
    int dat52 = 51;
    int dat86 = -33;
    int prev45 = 42;
    int res46 = -5;
    int a93 = 30128;
    int i;
    for (i = 0; i < 53; i++) {
        dat86 = hi50 + dat52;
        dat52 = dat86 - 3;
        prev45 = dat46 - dat46;
        dat46 = dat46 + 1;
        hi50 = hi50 + 3;
        res46 = dat52 + 9;
        hi50 = prev45;
        dat86 = prev45 - 8;
    }
}
int main() { test_func(); return 0; }

