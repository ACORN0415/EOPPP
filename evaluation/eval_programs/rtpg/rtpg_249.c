// RTPG_249: vars=3 stmts=2
void test_func(void) {
    int lo45 = 40;
    int lo16 = 51071;
    int hi28 = -37;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo16 = lo45 * 6625;
        hi28 = hi28 * 28;
    }
}
int main() { test_func(); return 0; }

