// RTPG_1242: vars=8 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int b0 = 65306;
    int a42 = 24464;
    int val4 = 43;
    int res48 = 8;
    int b63 = -24;
    int res11 = -32;
    int val84 = 2;
    int acc41 = 29;
    int i;
    for (i = 0; i < 64; i++) {
        b0 = xn[i];
        val4 = acc41 + acc41;
        a42 = a42 - 2;
        val84 = b0 + b63;
        res11 = b63 - acc41;
        val84 = acc41 - res11;
        val84 = val84 + 2;
        a42 = val4 + b0;
        res11 = a42 - b63;
        res11 = res11 + 2;
        acc41 = val4 - res48;
        res48 = val84 + 63468;
        yo[i] = val4;
    }
}
int main() { test_func(); return 0; }

