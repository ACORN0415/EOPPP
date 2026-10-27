// RTPG_2319: vars=6 stmts=2
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int res76 = 0;
    int acc36 = 8;
    int dat24 = -6;
    int acc90 = 18;
    int b91 = 8;
    int y55 = 55;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        b91 = xn[i];
        dat24 = xn[idx_arr[i]];
        acc36 = dat24 * 32;
        dat24 = acc36;
        yo[i] = acc36;
    }
}
int main() { test_func(); return 0; }

