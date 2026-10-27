// RTPG_5378: vars=7 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int out23 = 60193;
    int dat29 = 63;
    int v90 = 33383;
    int lo93 = -12;
    int z91 = 60;
    int y84 = -12;
    int val79 = 51;
    int h0 = 62242;
    int sv0 = 0;
    int h1 = 10565;
    int sv1 = 0;
    int h2 = 60;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        lo93 = xn[i];
        dat29 = dat29 - 2;
        lo93 = y84;
        v90 = z91 + v90;
        lo93 = lo93 * 16395;
        out23 = dat29;
        v90 = v90 - 5;
        out23 = lo93 - val79;
        y84 = y84 - 2;
        if (y84 == 61) {
        z91 = lo93 - 40;
        }
        yo[i] = v90;
    }
}
int main() { test_func(); return 0; }

