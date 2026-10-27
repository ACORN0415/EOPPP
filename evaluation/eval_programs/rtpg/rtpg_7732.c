// RTPG_7732: vars=8 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int lo95 = 6;
    int c63 = 15;
    int dat30 = 93;
    int lo90 = 40;
    int res17 = 100;
    float cur46 = 54.92;
    int c57 = 10;
    int sum25 = 10;
    int *ptr = &c57;
    int i;
    for (i = 0; i < 64; i++) {
        cur46 = xn[i];
        lo90 = lo90 - dat30;
        sum25 = dat30 - sum25;
        lo95 = c63 + lo95;
        c57 = lo95 + res17;
        *ptr = *ptr + 5;
        yo[i] = c57;
    }
}
int main() { test_func(); return 0; }

