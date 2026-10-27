// RTPG_6168: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int val60 = 0;
    int cur50 = 57025;
    int acc23 = 6;
    int i;
    for (i = 0; i < 64; i++) {
        val60 = xn[i];
        cur50 = val60 - acc23;
        val60 = cur50 + 10;
        if (val60 < -38) {
        cur50 = cur50;
        }
        yo[i] = val60;
    }
}
int main() { test_func(); return 0; }

