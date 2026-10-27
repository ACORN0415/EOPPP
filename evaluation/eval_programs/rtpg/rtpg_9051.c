// RTPG_9051: vars=8 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int val40 = 4;
    int sum18 = 53;
    int y92 = 7;
    int val13 = 4967;
    int lo22 = 51;
    int hi97 = 27367;
    int y9 = 20;
    int acc78 = -2;
    int i;
    for (i = 0; i < 32; i++) {
        acc78 = xn[i];
        val40 = val13 - acc78;
        hi97 = y92 + val13;
        sum18 = y9;
        lo22 = y9 - acc78;
        yo[i] = y92;
    }
}
int main() { test_func(); return 0; }

