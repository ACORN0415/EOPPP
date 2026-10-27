// RTPG_2209: vars=3 stmts=2
void test_func(void) {
    int prev1 = 3;
    int c38 = 74;
    int x25 = 36702;
    int h0 = -19;
    int sv0 = 0;
    int h1 = -8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 5; i++) {
        prev1 = prev1 - prev1;
        prev1 = x25 + 3;
    }
}
int main() { test_func(); return 0; }

