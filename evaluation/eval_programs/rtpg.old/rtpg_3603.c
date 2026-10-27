// RTPG_3603: vars=3 stmts=6
void test_func(void) {
    int a86 = 95;
    int val92 = 75;
    int z51 = 23633;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 46;
    int sv1 = 0;
    int i;
    for (i = 0; i < 78; i++) {
        val92 = val92 - 2;
        a86 = val92;
        val92 = val92;
        z51 = a86 * 5;
        val92 = z51 + a86;
        val92 = a86 - val92;
    }
}
int main() { test_func(); return 0; }

