// RTPG_1762: vars=10 stmts=7
int idx_arr[32];
void test_func(void) {
    int b0 = -44;
    int res65 = -2;
    int a70 = 40;
    int cnt91 = 50173;
    int dat68 = -32;
    int a92 = 1;
    int cnt15 = 43;
    int y5 = 44126;
    int z38 = 70;
    int y14 = 7;
    int i;
    for (i = 0; i < 85; i++) {
        b0 = xn[idx_arr[i]];
        a70 = z38 ^ a70;
        z38 = z38 - 5;
        y14 = b0 ^ res65;
        z38 = y14 | res65;
        z38 = res65 / cnt91;
        a70 = cnt91 ^ z38;
        z38 = y14 + cnt91;
    }
}
int main() { test_func(); return 0; }

