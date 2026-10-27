// RTPG_502: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int v31 = 45204;
    int acc64 = 7;
    int prev26 = 14;
    int y25 = 14964;
    int v80 = 56;
    int b14 = 1670;
    int h0 = 11;
    int sv0 = 0;
    int h1 = 22;
    int sv1 = 0;
    int h2 = 51257;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b14 = xn[i];
        v31 = y25 | prev26;
        b14 = b14 & y25;
        y25 = v80 * 61759;
        v80 = v80 + 2;
        yo[i] = v80;
    }
}
int main() { test_func(); return 0; }

