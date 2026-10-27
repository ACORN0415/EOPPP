// RTPG_6083: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int cnt25 = -23;
    int prev18 = 34262;
    int b60 = 8;
    int b84 = 81;
    int h0 = 23581;
    int sv0 = 0;
    int h1 = 81;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b60 = xn[i];
        b60 = prev18 + cnt25;
        b60 = b60 + 5;
        b84 = cnt25;
        yo[i] = prev18;
    }
}
int main() { test_func(); return 0; }

