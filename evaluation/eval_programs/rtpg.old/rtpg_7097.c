// RTPG_7097: vars=9 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int a58 = 1;
    int prev99 = 6;
    int val13 = 12;
    int b83 = 82;
    int sum58 = 35668;
    int val45 = 9;
    int b91 = 7607;
    int z22 = -43;
    int a83 = 10;
    int i;
    for (i = 0; i < 32; i++) {
        z22 = xn[i];
        val13 = a58 - prev99;
        val45 = val13;
        a83 = sum58 - z22;
        a58 = a58 + 4;
        val45 = a83 + a83;
        if (sum58 != 32) {
        val13 = a83 - sum58;
        }
        yo[i] = b83;
    }
}
int main() { test_func(); return 0; }

