// RTPG_843: vars=8 stmts=7
void test_func(void) {
    int sum32 = -42;
    int res1 = 72;
    int cur27 = -14;
    int dat12 = 49;
    int lo79 = 47679;
    int lo66 = 49;
    int prev4 = 55;
    int acc84 = 44;
    int i;
    for (i = 0; i < 22; i++) {
        lo79 = cur27 + lo66;
        lo79 = prev4;
        prev4 = prev4 + 1;
        cur27 = res1 + prev4;
        dat12 = lo79 + acc84;
        acc84 = lo79 + 99;
        cur27 = dat12 + acc84;
    }
}
int main() { test_func(); return 0; }

