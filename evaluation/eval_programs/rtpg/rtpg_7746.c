// RTPG_7746: vars=3 stmts=5
int idx_arr[32];
void test_func(void) {
    int lo38 = 88;
    int out34 = 5;
    int c65 = 9;
    int h0 = 57727;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 45; i++) {
        c65 = xn[idx_arr[i]];
        c65 = lo38 * 5;
        out34 = c65 / out34;
        lo38 = out34 - c65;
        out34 = out34 * 30;
        lo38 = lo38 * 64464;
        if (out34 != 36) {
        c65 = c65 + 4;
        }
    }
}
int main() { test_func(); return 0; }

