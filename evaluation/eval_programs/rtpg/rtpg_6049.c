// RTPG_6049: vars=6 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int out23 = 60803;
    int dat3 = 18;
    int z25 = 18;
    int tmp13 = 10;
    int val48 = 2299;
    int a71 = 68;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int h2 = 64;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        z25 = xn[i];
        out23 = xn[idx_arr[i]];
        dat3 = dat3 - a71;
        z25 = dat3 * 9;
        a71 = out23 + 58;
        z25 = a71 - val48;
        if (out23 != 61) {
        a71 = out23 - z25;
        }
        yo[i] = z25;
    }
}
int main() { test_func(); return 0; }

