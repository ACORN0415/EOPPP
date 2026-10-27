// RTPG_5020: vars=7 stmts=2
int idx_arr[32];
enum State { BLUE, FAST, ON };
void test_func(void) {
    int cnt50 = 8;
    int out32 = 27196;
    int lo48 = 4;
    int v10 = 26;
    int cnt77 = 25752;
    int cur60 = -15;
    int acc95 = 9;
    enum State st = BLUE;
    int h0 = -15;
    int sv0 = 0;
    int h1 = 89;
    int sv1 = 0;
    int i;
    for (i = 0; i < 30; i++) {
        lo48 = xn[idx_arr[i]];
        cur60 = cnt50 / out32;
        acc95 = cnt77 % cnt50;
    }
}
int main() { test_func(); return 0; }

