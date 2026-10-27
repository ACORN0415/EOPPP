// RTPG_6754: vars=4 stmts=11
void test_func(void) {
    int dat86 = -27;
    int cnt11 = 7;
    int b18 = 59;
    int hi49 = 22;
    int i;
    for (i = 0; i < 40; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        cnt11 = dat86 + dat86;
        hi49 = hi49 + 5;
        dat86 = cnt11 + hi49;
        cnt11 = hi49;
        dat86 = hi49;
        b18 = hi49;
        cnt11 = hi49 - cnt11;
        b18 = cnt11 - 2;
        b18 = cnt11 - dat86;
        dat86 = hi49 - b18;
        b18 = dat86 + b18;
        }
    }
}
int main() { test_func(); return 0; }

