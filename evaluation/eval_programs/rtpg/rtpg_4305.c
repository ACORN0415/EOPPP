// RTPG_4305: vars=6 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int a85 = 57963;
    int tmp82 = 5;
    int hi17 = 48;
    int tmp18 = -33;
    int acc75 = 29197;
    int b5 = 22131;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        b5 = xn[i];
        b5 = hi17 | tmp18;
        tmp82 = hi17 * 35252;
        b5 = tmp18 & hi17;
        tmp18 = tmp18 - 3;
        acc75 = tmp18;
        tmp82 = acc75 - a85;
        yo[i] = acc75;
    }
}
int main() { test_func(); return 0; }

