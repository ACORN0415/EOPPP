// RTPG_4580: vars=3 stmts=3
void test_func(void) {
    int b53 = 51136;
    int z96 = 8;
    int res22 = 2617;
    int i;
    for (i = 0; i < 12; i++) {
        b53 = b53 + 4;
        res22 = b53 + 3234;
        z96 = res22 ^ b53;
    }
}
int main() { test_func(); return 0; }

