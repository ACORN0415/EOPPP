// RTPG_9047: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev66 = -1;
    int z16 = 100;
    int cur42 = 3;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 43912;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cur42 = xn[i];
        prev66 = z16;
        prev66 = prev66 + z16;
        prev66 = cur42 * 12;
        z16 = z16 + z16;
        cur42 = cur42 - 5;
        yo[i] = z16;
    }
}
int main() { test_func(); return 0; }

