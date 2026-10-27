// RTPG_955: vars=4 stmts=5
void test_func(void) {
    int val83 = 10;
    int hi81 = 3;
    int z11 = 28985;
    int tmp45 = 89;
    int i;
    for (i = 0; i < 93; i++) {
        val83 = tmp45 % z11;
        val83 = hi81 ^ z11;
        z11 = z11 - tmp45;
        tmp45 = val83 / tmp45;
        tmp45 = tmp45 / hi81;
    }
}
int main() { test_func(); return 0; }

