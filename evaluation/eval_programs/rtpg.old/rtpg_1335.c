// RTPG_1335: vars=3 stmts=5
void test_func(void) {
    int val26 = 98;
    int out51 = 6379;
    int a26 = 29;
    int h0 = 73;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 6; i++) {
        out51 = out51 * 33488;
        out51 = val26 + out51;
        val26 = val26 * 5;
        out51 = val26 - out51;
        val26 = out51 + out51;
    }
}
int main() { test_func(); return 0; }

