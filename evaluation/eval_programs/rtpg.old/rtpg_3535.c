// RTPG_3535: vars=3 stmts=4
void test_func(void) {
    int res3 = 4875;
    int out85 = 5121;
    int lo20 = 4053;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 38; i++) {
        out85 = res3 + lo20;
        res3 = out85 - res3;
        lo20 = res3 * 43;
        lo20 = out85 - res3;
        if (res3 <= -22) {
        res3 = out85 - lo20;
        }
    }
}
int main() { test_func(); return 0; }

