// RTPG_3966: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int y49 = 0;
    int prev26 = 33;
    int cnt41 = 3;
    int cur87 = -45;
    int h0 = 80;
    int sv0 = 0;
    int h1 = 1025;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        prev26 = xn[i];
        prev26 = prev26 - 4;
        cur87 = cnt41 * 30139;
        y49 = y49;
        prev26 = prev26 + 4;
        cnt41 = cnt41 % cur87;
        yo[i] = cur87;
    }
}
int main() { test_func(); return 0; }

