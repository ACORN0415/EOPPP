// RTPG_1382: vars=8 stmts=11
void test_func(void) {
    int lo37 = 13596;
    int y2 = 39348;
    int z36 = 79;
    int b16 = 10;
    int z4 = 46;
    int dat55 = 9;
    int a20 = 16;
    int out34 = 16;
    int i;
    for (i = 0; i < 26; i++) {
        z36 = b16 | a20;
        dat55 = dat55 ^ a20;
        out34 = dat55 % z36;
        y2 = b16 + -14;
        dat55 = z4;
        lo37 = a20 + b16;
        a20 = y2;
        out34 = dat55 | a20;
        z4 = a20;
        lo37 = y2 / b16;
        z4 = b16 / z36;
        if (z36 > 38980) goto done;
    }
done:
    dat55 = 0;
}
int main() { test_func(); return 0; }

