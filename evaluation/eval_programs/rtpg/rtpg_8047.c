// RTPG_8047: vars=6 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int lo46 = 98;
    int c68 = 7;
    int prev29 = 46752;
    int b30 = 58;
    int tmp83 = 2;
    int cnt6 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        prev29 = xn[i];
        c68 = lo46 - cnt6;
        cnt6 = lo46 - cnt6;
        if (tmp83 >= -10) {
        c68 = c68 - tmp83;
        }
        yo[i] = lo46;
    }
}
int main() { test_func(); return 0; }

