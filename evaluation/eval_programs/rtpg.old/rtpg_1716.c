// RTPG_1716: vars=3 stmts=6
void test_func(void) {
    int x66 = 75;
    int hi57 = 2;
    int val25 = 66;
    int i;
    for (i = 0; i < 50; i++) {
        val25 = x66 - val25;
        x66 = val25 - 93;
        hi57 = x66;
        val25 = val25 - hi57;
        val25 = x66 / hi57;
        x66 = val25;
    }
}
int main() { test_func(); return 0; }

