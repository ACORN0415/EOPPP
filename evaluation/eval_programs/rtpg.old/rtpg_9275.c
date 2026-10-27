// RTPG_9275: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int sum10 = 3;
    int c68 = 1;
    int out84 = 0;
    int y27 = 99;
    int val14 = 23814;
    int h0 = -14;
    int sv0 = 0;
    int h1 = 58496;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        c68 = xn[i];
        y27 = sum10;
        sum10 = c68 + -48;
        val14 = sum10 * 28625;
        c68 = c68 + 4;
        yo[i] = sum10;
    }
}
int main() { test_func(); return 0; }

