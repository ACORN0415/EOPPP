// RTPG_8646: vars=10 stmts=5
void test_func(void) {
    int v16 = 36;
    int val62 = 44093;
    int b61 = -28;
    int prev23 = 41;
    int a95 = 4;
    int out38 = 42169;
    int z91 = 22;
    int b93 = 10;
    int c9 = -1;
    int a38 = 7349;
    int *ptr = &val62;
    int i;
    for (i = 0; i < 16; i++) {
        z91 = val62;
        c9 = out38 ^ prev23;
        out38 = a38;
        c9 = b61 - b61;
        val62 = z91 - c9;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

