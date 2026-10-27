// RTPG_1426: vars=3 stmts=4
void test_func(void) {
    int b93 = 19;
    int b85 = 2;
    int val96 = 88;
    int i;
    for (i = 0; i < 85; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        b85 = val96;
        val96 = val96;
        val96 = b93 - val96;
        val96 = b93;
        }
    }
}
int main() { test_func(); return 0; }

