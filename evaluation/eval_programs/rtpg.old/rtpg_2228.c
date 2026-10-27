// RTPG_2228: vars=3 stmts=2
void test_func(void) {
    int prev1 = 3;
    int x25 = 74;
    int c38 = 36702;
    int h0 = -19;
    int sv0 = 0;
    int h1 = -8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 5; i++) {
        prev1 = prev1 - prev1;
        prev1 = c38 + 3;
    }
}
int main() { test_func(); return 0; }

