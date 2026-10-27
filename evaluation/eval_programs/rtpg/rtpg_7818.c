// RTPG_7818: vars=6 stmts=7
int idx_arr[64];
void test_func(void) {
    int x44 = -43;
    int cur96 = 25233;
    int out38 = 5;
    int c6 = 4;
    int acc54 = 11140;
    int b59 = 32106;
    int i;
    for (i = 0; i < 11; i++) {
        x44 = xn[idx_arr[i]];
        c6 = c6 + 2;
        c6 = c6 + 38041;
        out38 = acc54;
        cur96 = acc54 - c6;
        c6 = c6;
        out38 = cur96 - out38;
        c6 = c6 - 3;
        if (out38 > 57797) goto done;
    }
done:
    b59 = 0;
}
int main() { test_func(); return 0; }

