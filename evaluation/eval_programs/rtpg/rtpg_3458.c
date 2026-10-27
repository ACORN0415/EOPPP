// RTPG_3458: vars=5 stmts=2
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int tmp66 = 7;
    int res50 = 42343;
    int dat22 = 54370;
    int acc47 = -13;
    int acc18 = 16156;
    int h0 = 44286;
    int sv0 = 0;
    int h1 = 17;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat22 = xn[i];
        acc47 = xn[idx_arr[i]];
        dat22 = acc18 - tmp66;
        acc47 = acc18 - acc18;
        if (res50 < 16) {
        acc18 = tmp66 - 2;
        }
        yo[i] = acc18;
    }
}
int main() { test_func(); return 0; }

