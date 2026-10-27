// RTPG_6168: vars=6 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int cur42 = 7;
    int res80 = 52;
    int tmp66 = 4;
    int cur72 = -8;
    int res62 = 32637;
    int tmp53 = 8;
    int h0 = 62473;
    int sv0 = 0;
    int h1 = 73;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        tmp53 = xn[i];
        res80 = res80 - 1;
        tmp53 = cur42 - 4967;
        res80 = res62 - tmp66;
        cur72 = tmp53 * 2;
        cur42 = tmp53;
        tmp53 = res80 - 33;
        res62 = res62 + 2;
        res80 = res80 + 5;
        tmp53 = tmp66 - cur42;
        res80 = tmp66 * 7;
        yo[i] = cur72;
    }
}
int main() { test_func(); return 0; }

