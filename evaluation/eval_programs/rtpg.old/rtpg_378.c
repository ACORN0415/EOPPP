// RTPG_378: vars=7 stmts=8
void test_func(void) {
    int val9 = 85;
    double hi64 = 9.86;
    int x62 = 24829;
    int z25 = 20;
    int a73 = 10;
    float z1 = 38.26;
    int x92 = -33;
    int i;
    for (i = 0; i < 27; i++) {
        z1 = x92 + z25;
        val9 = z1;
        z25 = x62;
        x62 = hi64 + z1;
        val9 = z1 - val9;
        x62 = z1 + a73;
        val9 = val9 - 2;
        hi64 = val9 + z25;
        if (z1 >= 11) {
        z1 = x92 - -29;
        }
    }
}
int main() { test_func(); return 0; }

