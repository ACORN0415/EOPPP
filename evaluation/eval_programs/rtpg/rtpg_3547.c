// RTPG_3547: vars=3 stmts=4
void test_func(void) {
    int out85 = 4875;
    int lo20 = 5121;
    int res3 = 4053;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 38; i++) {
        lo20 = out85 + res3;
        out85 = lo20 - out85;
        res3 = out85 * 43;
        res3 = lo20 - out85;
        if (out85 <= -22) {
        out85 = lo20 - res3;
        }
    }
}
int main() { test_func(); return 0; }

