// RTPG_5136: vars=9 stmts=6
void test_func(void) {
    int prev62 = 91;
    int prev1 = 64414;
    int b92 = 51;
    int acc77 = 1;
    int cur56 = 8;
    int acc76 = 52939;
    int val47 = 5;
    int z6 = 2;
    int b93 = 43297;
    int i;
    for (i = 0; i < 100; i++) {
        acc77 = cur56 + prev62;
        z6 = z6 + 4;
        prev1 = prev1 + 5;
        prev62 = prev62 - 1;
        val47 = prev62 - b93;
        val47 = val47 - 1;
        if (b92 > 10) {
        val47 = b92 + prev62;
        }
    }
}
int main() { test_func(); return 0; }

