// RTPG_248: vars=3 stmts=2
void test_func(void) {
    int lo45 = 40;
    int hi28 = 51071;
    int lo16 = -37;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        hi28 = lo45 * 6625;
        lo16 = lo16 * 28;
    }
}
int main() { test_func(); return 0; }

