// RTPG_1681: vars=10 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int v62 = 17;
    int val96 = 0;
    int x43 = 7;
    int v76 = 24;
    int c87 = 1;
    int cur34 = 18685;
    int cnt43 = 10;
    int b85 = 47;
    int lo60 = 8;
    int tmp95 = 43681;
    int i;
    for (i = 0; i < 64; i++) {
        cnt43 = xn[i];
        cur34 = x43 + x43;
        b85 = tmp95 & v62;
        b85 = val96 / lo60;
        b85 = b85 + 1;
        c87 = cur34 + cnt43;
        val96 = cur34 - 55;
        tmp95 = x43 % c87;
        v62 = c87 ^ tmp95;
        tmp95 = b85 - cur34;
        lo60 = v62 - x43;
        lo60 = c87 % tmp95;
        b85 = b85 + 3;
        yo[i] = v76;
    }
}
int main() { test_func(); return 0; }

