// RTPG_8980: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int hi7 = 14;
    int cnt71 = 14;
    int dat20 = 47;
    int sum2 = -45;
    int c80 = 2;
    int *ptr = &sum2;
    int h0 = 42;
    int sv0 = 0;
    int h1 = 98;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat20 = xn[i];
        cnt71 = hi7 * 40;
        cnt71 = c80 * 0;
        hi7 = dat20 - hi7;
        c80 = cnt71 % sum2;
        hi7 = hi7 | dat20;
        *ptr = *ptr + 5;
        if (hi7 != 10) {
        hi7 = hi7 + 2;
        }
        yo[i] = c80;
    }
}
int main() { test_func(); return 0; }

