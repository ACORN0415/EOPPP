// RTPG_5419: vars=4 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int c98 = 6;
    int prev28 = -3;
    int cur61 = 87;
    int res57 = 77;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        prev28 = xn[i];
        res57 = cur61;
        cur61 = res57 + c98;
        prev28 = c98 + res57;
        cur61 = cur61 - 1;
        cur61 = cur61 - prev28;
        cur61 = res57 * 28;
        c98 = cur61 + 8;
        cur61 = cur61 * 10;
        c98 = cur61 - 19248;
        res57 = cur61;
        if (c98 > -28) {
        prev28 = res57 - 83;
        }
        yo[i] = c98;
    }
}
int main() { test_func(); return 0; }

