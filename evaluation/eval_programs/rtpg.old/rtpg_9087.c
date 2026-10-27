// RTPG_9087: vars=4 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int val32 = 1;
    int res19 = 31942;
    int cur20 = 13680;
    int a25 = -48;
    int h0 = 58884;
    int sv0 = 0;
    int h1 = 11665;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        res19 = xn[i];
        val32 = cur20 * 8;
        cur20 = val32 - 10;
        res19 = val32;
        a25 = cur20;
        yo[i] = cur20;
    }
}
int main() { test_func(); return 0; }

