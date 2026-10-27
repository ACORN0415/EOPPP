// RTPG_1228: vars=8 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int val4 = 65306;
    int b0 = 24464;
    int b63 = 43;
    int a42 = 8;
    int res11 = -24;
    int acc41 = -32;
    int val84 = 2;
    int res48 = 29;
    int i;
    for (i = 0; i < 64; i++) {
        val4 = xn[i];
        b63 = res48 + res48;
        b0 = b0 - 2;
        val84 = val4 + res11;
        acc41 = res11 - res48;
        val84 = res48 - acc41;
        val84 = val84 + 2;
        b0 = b63 + val4;
        acc41 = b0 - res11;
        acc41 = acc41 + 2;
        res48 = b63 - a42;
        a42 = val84 + 63468;
        yo[i] = b63;
    }
}
int main() { test_func(); return 0; }

