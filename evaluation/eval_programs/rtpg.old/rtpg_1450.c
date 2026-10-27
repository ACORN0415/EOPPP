// RTPG_1450: vars=4 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int acc27 = 17;
    int tmp24 = 3;
    int y91 = 64062;
    int sum87 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        tmp24 = xn[i];
        y91 = xn[idx_arr[i]];
        tmp24 = y91;
        tmp24 = acc27 + y91;
        sum87 = acc27 % sum87;
        y91 = y91 + acc27;
        sum87 = sum87 - 2;
        if (acc27 != -39) {
        tmp24 = y91 - y91;
        }
        yo[i] = tmp24;
    }
}
int main() { test_func(); return 0; }

