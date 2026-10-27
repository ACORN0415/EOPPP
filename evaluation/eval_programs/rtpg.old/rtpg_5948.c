// RTPG_5948: vars=6 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int a71 = 60803;
    int dat3 = 18;
    int out23 = 18;
    int z25 = 10;
    int val48 = 2299;
    int tmp13 = 68;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int h2 = 64;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        out23 = xn[i];
        a71 = xn[idx_arr[i]];
        dat3 = dat3 - tmp13;
        out23 = dat3 * 9;
        tmp13 = a71 + 58;
        out23 = tmp13 - val48;
        if (a71 != 61) {
        tmp13 = a71 - out23;
        }
        yo[i] = out23;
    }
}
int main() { test_func(); return 0; }

