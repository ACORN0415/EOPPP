// RTPG_2388: vars=5 stmts=8
int idx_arr[32];
void test_func(void) {
    int cnt57 = 23;
    double cur83 = 83.25;
    int prev0 = 25;
    int dat84 = 61586;
    int acc1 = 3;
    int i;
    for (i = 0; i < 61; i++) {
        dat84 = xn[idx_arr[i]];
        dat84 = dat84 + 2;
        prev0 = prev0;
        acc1 = prev0;
        cnt57 = cur83 + dat84;
        acc1 = acc1 + 2;
        acc1 = prev0 + acc1;
        acc1 = cnt57 - cur83;
        cur83 = cur83 + 5;
        if (dat84 >= 87) {
        dat84 = acc1 + cur83;
        }
    }
}
int main() { test_func(); return 0; }

