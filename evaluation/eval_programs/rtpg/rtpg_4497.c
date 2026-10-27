// RTPG_4497: vars=3 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int cnt60 = 6;
    int c4 = 63029;
    int b79 = 32073;
    int i;
    for (i = 0; i < 16; i++) {
        cnt60 = xn[i];
        b79 = cnt60;
        b79 = cnt60 - c4;
        b79 = cnt60;
        c4 = c4 - cnt60;
        cnt60 = c4 + 33;
        c4 = c4 + 1;
        cnt60 = c4 + 82;
        b79 = cnt60;
        if (b79 > 52799) goto done;
        if (c4 >= 84) {
        c4 = c4 + c4;
        }
        yo[i] = cnt60;
    }
done:
    c4 = 0;
}
int main() { test_func(); return 0; }

