// RTPG_736: vars=6 stmts=5
void test_func(void) {
    int acc0 = 38221;
    int dat0 = 1;
    int z39 = 1;
    int hi28 = 2;
    int v52 = 104;
    int val94 = 3;
    int h0 = 21;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 78; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        z39 = z39 + 1;
        val94 = val94 + 5;
        hi28 = hi28 + 1;
        z39 = hi28 + 5;
        val94 = dat0 + hi28;
        }
    }
}
int main() { test_func(); return 0; }

