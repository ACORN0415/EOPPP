// RTPG_942: vars=3 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int lo62 = 3;
    int val54 = 5;
    int cur10 = 6714;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 38798;
    int sv1 = 0;
    int i;
    for (i = 0; i < 58; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        lo62 = cur10 + lo62;
        cur10 = val54 - val54;
        val54 = val54 - lo62;
        cur10 = cur10 + 1;
        val54 = cur10 - val54;
        val54 = val54 + lo62;
        cur10 = val54 + cur10;
        cur10 = cur10;
        val54 = val54 + 4;
        lo62 = cur10;
        val54 = lo62 + cur10;
        }
    }
}
int main() { test_func(); return 0; }

