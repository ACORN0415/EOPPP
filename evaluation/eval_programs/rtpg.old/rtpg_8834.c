// RTPG_8834: vars=7 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int cur0 = 10;
    int acc72 = 4;
    int c27 = 2;
    int out18 = 27;
    int z64 = 31472;
    double z84 = 45.87;
    int z71 = 9;
    int h0 = 20;
    int sv0 = 0;
    int h1 = -48;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        c27 = xn[i];
        cur0 = z64 * -16;
        z71 = cur0 * 6;
        c27 = cur0 * 5;
        c27 = acc72 * -45;
        if (acc72 > 6) goto done;
        if (cur0 == -41) {
        cur0 = cur0 - 1;
        }
        yo[i] = cur0;
    }
done:
    c27 = 0;
}
int main() { test_func(); return 0; }

