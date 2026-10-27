// RTPG_422: vars=8 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int res43 = 80;
    int cnt54 = 28;
    int y15 = 0;
    int lo67 = 32493;
    int cnt58 = 48;
    int acc29 = 44;
    int out97 = 44;
    int cur51 = 9540;
    int i;
    for (i = 0; i < 64; i++) {
        acc29 = xn[i];
        res43 = cnt58 + lo67;
        y15 = cnt58 - acc29;
        cnt58 = out97;
        acc29 = out97 - cnt54;
        lo67 = lo67 + acc29;
        lo67 = lo67 + 2;
        y15 = res43 - 30266;
        y15 = cnt58 - lo67;
        cur51 = cnt54 + lo67;
        lo67 = cur51;
        yo[i] = lo67;
    }
}
int main() { test_func(); return 0; }

