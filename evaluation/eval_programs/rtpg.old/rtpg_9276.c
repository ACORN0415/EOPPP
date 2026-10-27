// RTPG_9276: vars=5 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int tmp3 = 37;
    int dat83 = 76;
    int tmp24 = 2;
    int b81 = 7;
    int sum87 = 82;
    int *ptr = &dat83;
    int i;
    for (i = 0; i < 16; i++) {
        dat83 = xn[i];
        tmp24 = tmp3 + 1;
        tmp24 = dat83 - b81;
        dat83 = dat83 - 4;
        dat83 = dat83 - 32058;
        dat83 = b81;
        b81 = tmp3 - sum87;
        dat83 = tmp3 - sum87;
        b81 = tmp3 + tmp24;
        *ptr = *ptr + 2;
        if (b81 > -49) {
        dat83 = tmp24 - 9;
        }
        yo[i] = tmp24;
    }
}
int main() { test_func(); return 0; }

