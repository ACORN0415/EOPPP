// RTPG_5859: vars=5 stmts=10
void test_func(void) {
    int y34 = 43;
    int v67 = 22;
    int res4 = 26;
    int res84 = 5;
    int c48 = 8;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 36431;
    int sv1 = 0;
    int i;
    for (i = 0; i < 55; i++) {
        res4 = v67 * 15;
        v67 = v67 + 5;
        res84 = res4 * 10;
        res84 = y34 * 10;
        v67 = res84 + c48;
        res84 = res84 + 10;
        y34 = c48 * 96;
        res84 = res84 + 4;
        v67 = c48 + 34;
        c48 = y34 - y34;
    }
}
int main() { test_func(); return 0; }

