// RTPG_4440: vars=3 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int cnt60 = 6;
    int b79 = 63029;
    int c4 = 32073;
    int i;
    for (i = 0; i < 16; i++) {
        cnt60 = xn[i];
        c4 = cnt60;
        c4 = cnt60 - b79;
        c4 = cnt60;
        b79 = b79 - cnt60;
        cnt60 = b79 + 33;
        b79 = b79 + 1;
        cnt60 = b79 + 82;
        c4 = cnt60;
        if (c4 > 52799) goto done;
        if (b79 >= 84) {
        b79 = b79 + b79;
        }
        yo[i] = cnt60;
    }
done:
    b79 = 0;
}
int main() { test_func(); return 0; }

