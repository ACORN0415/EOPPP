// RTPG_9607: vars=4 stmts=7
void test_func(void) {
    int acc31 = 14;
    int prev5 = 62421;
    int res94 = 75;
    int prev78 = 9;
    int i;
    for (i = 0; i < 93; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        prev5 = prev78;
        acc31 = prev78 - acc31;
        prev5 = prev5 + 3;
        prev5 = acc31 - acc31;
        prev5 = prev5 - res94;
        prev5 = prev5;
        prev78 = res94 + prev78;
        }
    }
}
int main() { test_func(); return 0; }

