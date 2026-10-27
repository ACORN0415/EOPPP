// RTPG_8422: vars=3 stmts=2
void test_func(void) {
    int v74 = 10;
    int hi59 = 46883;
    int prev78 = -2;
    int i;
    for (i = 0; i < 42; i++) {
        hi59 = hi59 - prev78;
        hi59 = hi59 - 3;
    }
}
int main() { test_func(); return 0; }

