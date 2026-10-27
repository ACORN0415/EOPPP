// RTPG_5251: vars=8 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int c75 = 17928;
    int a85 = -11;
    int prev49 = 12;
    int prev10 = 46134;
    int prev19 = 13543;
    int b15 = -49;
    int a92 = 1;
    int hi88 = 81;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int h2 = 3;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a85 = xn[i];
        b15 = b15 * 28366;
        prev19 = prev10 + 15;
        a92 = prev49 + a92;
        b15 = b15 - 2;
        if (hi88 < 15) {
        prev10 = prev10 - 2;
        }
        yo[i] = b15;
    }
}
int main() { test_func(); return 0; }

