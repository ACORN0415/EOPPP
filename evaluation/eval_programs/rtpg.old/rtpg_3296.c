// RTPG_3296: vars=3 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int val9 = 90;
    int cur39 = 2725;
    int res8 = 32;
    int h0 = 20232;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur39 = xn[i];
        cur39 = cur39 + 1;
        val9 = val9 - 4;
        cur39 = res8 + val9;
        val9 = cur39;
        cur39 = cur39 - 68;
        val9 = val9 - 1;
        val9 = cur39 * 1;
        val9 = val9 * 2;
        res8 = cur39 - 61490;
        cur39 = cur39 + 65466;
        res8 = cur39 * 7;
        val9 = val9 - 18483;
        if (res8 <= 99) {
        val9 = val9 - val9;
        }
        yo[i] = res8;
    }
}
int main() { test_func(); return 0; }

