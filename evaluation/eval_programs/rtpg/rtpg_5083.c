// RTPG_5083: vars=7 stmts=2
int idx_arr[32];
enum State { BLUE, FAST, ON };
void test_func(void) {
    int v10 = 8;
    int cnt50 = 27196;
    int cnt77 = 4;
    int acc95 = 26;
    int cur60 = 25752;
    int out32 = -15;
    int lo48 = 9;
    enum State st = BLUE;
    int h0 = -15;
    int sv0 = 0;
    int h1 = 89;
    int sv1 = 0;
    int i;
    for (i = 0; i < 30; i++) {
        cnt77 = xn[idx_arr[i]];
        out32 = v10 / cnt77;
        lo48 = cur60 % v10;
    }
}
int main() { test_func(); return 0; }

