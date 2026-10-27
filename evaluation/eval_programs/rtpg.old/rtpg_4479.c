// RTPG_4479: vars=7 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int acc38 = 29;
    int cur69 = 93;
    int acc19 = 48598;
    int acc70 = -14;
    int hi44 = 92;
    int out70 = 58736;
    int sum15 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        cur69 = xn[i];
        acc19 = hi44 - out70;
        acc70 = acc38 - hi44;
        acc38 = hi44 + sum15;
        hi44 = hi44 & acc38;
        hi44 = cur69 + hi44;
        acc19 = acc19 + 2;
        out70 = cur69 + acc70;
        acc38 = cur69 ^ hi44;
        sum15 = out70;
        hi44 = hi44 - 2;
        cur69 = acc38 - acc19;
        if (out70 <= 74) {
        hi44 = out70 - acc70;
        }
        yo[i] = out70;
    }
}
int main() { test_func(); return 0; }

