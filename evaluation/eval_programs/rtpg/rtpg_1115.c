// RTPG_1115: vars=5 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int b81 = 7;
    int val65 = 58211;
    int v12 = 94;
    int x11 = 48859;
    int acc70 = -47;
    int i;
    for (i = 0; i < 16; i++) {
        x11 = xn[i];
        val65 = v12;
        val65 = val65 - 1;
        acc70 = v12 + x11;
        val65 = val65 + 3;
        b81 = acc70 - v12;
        val65 = acc70 - v12;
        x11 = val65;
        val65 = val65 + 4;
        b81 = b81 + 75;
        v12 = v12 - 2;
        if (x11 < 41) {
        v12 = acc70;
        }
        yo[i] = val65;
    }
}
int main() { test_func(); return 0; }

