// RTPG_8677: vars=3 stmts=8
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int cnt34 = 30;
    int res20 = 5;
    int cnt10 = 29626;
    int h0 = 53108;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res20 = xn[i];
        res20 = xn[idx_arr[i]];
        res20 = res20 + 4;
        res20 = res20 * 46;
        cnt34 = res20 * 37;
        cnt10 = cnt34 * 4;
        res20 = cnt34 - res20;
        cnt10 = res20 * 6;
        cnt10 = cnt10 + 1;
        res20 = cnt10 * 3;
        if (res20 == 2) {
        res20 = cnt34 + -35;
        }
        yo[i] = cnt34;
    }
}
int main() { test_func(); return 0; }

