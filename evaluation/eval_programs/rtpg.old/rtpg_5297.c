// RTPG_5297: vars=3 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int hi34 = 39223;
    double cur50 = 58.04;
    int res0 = 35781;
    int h0 = 13;
    int sv0 = 0;
    int h1 = 71;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        hi34 = xn[i];
        hi34 = hi34 + 1;
        cur50 = cur50 - 3;
        if (hi34 <= 30) {
        hi34 = res0;
        }
        yo[i] = hi34;
    }
}
int main() { test_func(); return 0; }

