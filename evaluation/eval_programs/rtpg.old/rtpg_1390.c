// RTPG_1390: vars=8 stmts=11
void test_func(void) {
    int a20 = 13596;
    int z4 = 39348;
    int z36 = 79;
    int lo37 = 10;
    int out34 = 46;
    int dat55 = 9;
    int b16 = 16;
    int y2 = 16;
    int i;
    for (i = 0; i < 26; i++) {
        z36 = lo37 & b16;
        z36 = dat55 ^ out34;
        out34 = y2 + 9;
        lo37 = out34 & y2;
        dat55 = out34;
        a20 = b16 + lo37;
        b16 = z4;
        b16 = dat55 | b16;
        out34 = z36 + z4;
        z4 = out34 + lo37;
        z36 = out34 & lo37;
    }
done:
    z4 = 0;
}
int main() { test_func(); return 0; }

