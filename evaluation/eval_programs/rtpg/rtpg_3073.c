// RTPG_3073: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int y4 = 43;
    int a83 = 64521;
    int cur50 = 40;
    int h0 = 11;
    int sv0 = 0;
    int h1 = 50;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        y4 = xn[i];
        a83 = cur50 * 57871;
        cur50 = y4;
        a83 = cur50;
        cur50 = a83 * 64905;
        if (cur50 < -33) {
        cur50 = y4 - cur50;
        }
        yo[i] = a83;
    }
}
int main() { test_func(); return 0; }

