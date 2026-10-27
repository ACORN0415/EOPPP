// RTPG_6954: vars=8 stmts=12
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int z30 = 8;
    int cur87 = -44;
    int out73 = 33050;
    int cur14 = -31;
    int y75 = 31960;
    int v84 = 5;
    int cur0 = 61122;
    int y80 = 2934;
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
        cur0 = xn[i];
        cur87 = xn[idx_arr[i]];
        z30 = v84 * 4;
        cur0 = cur0 + 3;
        out73 = cur87 + cur14;
        cur0 = y75 - v84;
        y75 = cur87 * 40038;
        cur0 = cur0 * 20;
        cur87 = v84 + 7;
        out73 = out73 - 2;
        y80 = cur0 - y80;
        cur14 = cur0 - cur87;
        cur0 = z30 * -46;
        y80 = z30 * 30;
        if (cur0 >= 74) {
        y80 = y75 - y75;
        }
        yo[i] = v84;
    }
}
int main() { test_func(); return 0; }

