// RTPG_1931: vars=4 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int res14 = 23;
    int prev37 = 31561;
    int y34 = -37;
    int res93 = 19705;
    int h0 = 60575;
    int sv0 = 0;
    int h1 = 87;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        y34 = xn[i];
        y34 = res14 - prev37;
        y34 = prev37 + -10;
        res93 = res93 - 4;
        y34 = prev37 + 51915;
        y34 = y34 & res14;
        res93 = res93 & y34;
        res93 = res14 - y34;
        res93 = y34 + res93;
        if (res14 != 72) {
        res14 = res93 - prev37;
        }
        yo[i] = res93;
    }
}
int main() { test_func(); return 0; }

