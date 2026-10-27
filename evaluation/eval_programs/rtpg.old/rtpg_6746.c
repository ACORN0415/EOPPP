// RTPG_6746: vars=5 stmts=3
void test_func(void) {
    int cur37 = 0;
    int dat93 = 47;
    int cnt94 = 8;
    int dat86 = 7;
    int lo23 = 1236;
    int i;
    for (i = 0; i < 86; i++) {
        lo23 = lo23 + dat86;
        dat93 = dat86;
        dat93 = cur37 - dat86;
    }
}
int main() { test_func(); return 0; }

