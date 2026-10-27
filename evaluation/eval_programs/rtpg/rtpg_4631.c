// RTPG_4631: vars=3 stmts=3
void test_func(void) {
    int b53 = 51136;
    int res22 = 8;
    int z96 = 2617;
    int i;
    for (i = 0; i < 12; i++) {
        b53 = b53 + 4;
        z96 = b53 + 3234;
        res22 = z96 ^ b53;
    }
}
int main() { test_func(); return 0; }

