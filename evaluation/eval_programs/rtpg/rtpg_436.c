// RTPG_436: vars=4 stmts=5
void test_func(void) {
    int c48 = 30;
    int z54 = 7;
    int dat12 = 11;
    int v35 = 7;
    int i;
    for (i = 0; i < 14; i++) {
        c48 = z54;
        dat12 = dat12 + v35;
        dat12 = z54 + v35;
        v35 = dat12 - dat12;
        z54 = c48 - z54;
    }
}
int main() { test_func(); return 0; }

