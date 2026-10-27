// RTPG_9510: vars=6 stmts=2
void test_func(void) {
    int c94 = 8;
    int prev64 = 6;
    int hi54 = 2;
    int v14 = 41;
    int v74 = 14;
    int res7 = 32337;
    int i;
    for (i = 0; i < 78; i++) {
        res7 = hi54 | prev64;
        hi54 = prev64 ^ hi54;
    }
}
int main() { test_func(); return 0; }

