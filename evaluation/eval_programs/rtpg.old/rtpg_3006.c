// RTPG_3006: vars=8 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int tmp5 = 37;
    int c57 = 10;
    int v53 = 10;
    int acc96 = 47411;
    int lo91 = 54;
    int cur27 = 40365;
    int res83 = 59350;
    int res4 = 4;
    int i;
    for (i = 0; i < 32; i++) {
        lo91 = xn[i];
        res4 = cur27 + v53;
        acc96 = cur27 - 36;
        tmp5 = tmp5 - 1;
        c57 = tmp5 - v53;
        tmp5 = v53 - res4;
        res4 = v53 - c57;
        res83 = res83 - 1;
        res83 = acc96 + tmp5;
        lo91 = cur27 ^ lo91;
        res83 = tmp5 - res83;
        res4 = res4 + 5;
        if (lo91 < -34) {
        cur27 = tmp5 + 19;
        }
        yo[i] = res83;
    }
}
int main() { test_func(); return 0; }

