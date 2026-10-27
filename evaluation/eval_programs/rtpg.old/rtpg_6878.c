// RTPG_6878: vars=8 stmts=12
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int cur0 = 8;
    int cur14 = -44;
    int y80 = 33050;
    int y75 = -31;
    int v84 = 31960;
    int z30 = 5;
    int cur87 = 61122;
    int out73 = 2934;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 62875;
    int sv1 = 0;
    int h2 = 72;
    int sv2 = 0;
    int h3 = 3;
    int sv3 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur87 = xn[i];
        cur14 = xn[idx_arr[i]];
        cur0 = z30 * 4;
        cur87 = cur87 + 3;
        y80 = cur14 + y75;
        cur87 = v84 - z30;
        v84 = cur14 * 40038;
        cur87 = cur87 * 20;
        cur14 = z30 + 7;
        y80 = y80 - 2;
        out73 = cur87 - out73;
        y75 = cur87 - cur14;
        cur87 = cur0 * -46;
        out73 = cur0 * 30;
        if (cur87 >= 74) {
        out73 = v84 - v84;
        }
        yo[i] = z30;
    }
}
int main() { test_func(); return 0; }

