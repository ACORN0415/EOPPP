// RTPG_2509: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int cnt50 = 53;
    int hi85 = 44;
    int dat8 = 13;
    int z22 = 38;
    int tmp81 = 38754;
    int res6 = -27;
    int i;
    for (i = 0; i < 32; i++) {
        tmp81 = xn[i];
        dat8 = tmp81 / hi85;
        res6 = z22 - hi85;
        dat8 = hi85 & z22;
        z22 = tmp81 - dat8;
        z22 = z22 - 1;
        yo[i] = cnt50;
    }
}
int main() { test_func(); return 0; }

