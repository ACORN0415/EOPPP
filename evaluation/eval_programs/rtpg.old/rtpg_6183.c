// RTPG_6183: vars=3 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int cur10 = 420;
    int val14 = 54;
    int b70 = 6307;
    int i;
    for (i = 0; i < 21; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        b70 = val14;
        val14 = b70 - -24;
        cur10 = cur10;
        cur10 = cur10 + 4;
        b70 = val14 + cur10;
        }
    }
}
int main() { test_func(); return 0; }

