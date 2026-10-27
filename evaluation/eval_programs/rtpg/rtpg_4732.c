// RTPG_4732: vars=4 stmts=8
int idx_arr[64];
void test_func(void) {
    int cnt33 = 75;
    int val13 = 7;
    int val57 = 20;
    int acc55 = 10899;
    int h0 = 10;
    int sv0 = 0;
    int h1 = -17;
    int sv1 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        cnt33 = xn[idx_arr[i]];
        cnt33 = val57 + acc55;
        cnt33 = val13 + val13;
        val13 = val57 - val13;
        acc55 = cnt33 * -49;
        val13 = acc55;
        val57 = cnt33 + acc55;
        val57 = cnt33 * 45;
        val13 = val13 * 26;
        if (cnt33 <= 93) {
        cnt33 = val13 + cnt33;
        }
    }
}
int main() { test_func(); return 0; }

