// RTPG_1008: vars=3 stmts=3
void test_func(void) {
    int val3 = 5;
    int z82 = 1;
    int z84 = 11988;
    int i;
    for (i = 0; i < 36; i++) {
        z84 = z84 + 4;
        val3 = z84 - 6;
        val3 = z82 - val3;
    }
}
int main() { test_func(); return 0; }

