// RTPG_5973: vars=4 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int res61 = 72;
    int a32 = 29;
    int y83 = 7;
    int cur51 = -43;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        res61 = xn[i];
        a32 = res61 + cur51;
        res61 = res61;
        res61 = res61 + res61;
        res61 = y83;
        y83 = y83 + 1;
        res61 = a32 + -31;
        if (cur51 <= -49) {
        cur51 = cur51 - cur51;
        }
        yo[i] = cur51;
    }
}
int main() { test_func(); return 0; }

