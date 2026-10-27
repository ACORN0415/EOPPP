// RTPG_9430: vars=7 stmts=10
int idx_arr[16];
void test_func(void) {
    int y90 = -28;
    int a94 = 73;
    int dat19 = 8;
    int tmp81 = 26;
    int acc73 = 55836;
    int cur2 = -2;
    int z14 = 43262;
    int i;
    for (i = 0; i < 96; i++) {
        acc73 = xn[idx_arr[i]];
        z14 = a94 + acc73;
        a94 = dat19 + y90;
        y90 = cur2;
        dat19 = tmp81 + z14;
        y90 = z14 - a94;
        tmp81 = y90 - a94;
        cur2 = cur2;
        acc73 = z14 + acc73;
        y90 = z14 - y90;
        a94 = dat19 + a94;
    }
}
int main() { test_func(); return 0; }

