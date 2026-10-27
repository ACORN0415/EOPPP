// RTPG_6088: vars=4 stmts=10
void test_func(void) {
    int hi87 = 42518;
    int x31 = 55589;
    int prev60 = 3;
    int v55 = 13034;
    int i;
    for (i = 0; i < 48; i++) {
        x31 = hi87 + 29;
        hi87 = hi87 + prev60;
        x31 = v55;
        x31 = v55 + v55;
        v55 = v55 + -10;
        x31 = prev60 + hi87;
        x31 = v55 + x31;
        x31 = x31 + 1;
        x31 = x31 + 2;
        prev60 = prev60 + 3;
    }
}
int main() { test_func(); return 0; }

