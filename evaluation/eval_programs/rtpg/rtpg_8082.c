// RTPG_8082: vars=3 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int cnt46 = -16;
    int acc49 = 78;
    int out59 = -42;
    int h0 = 90;
    int sv0 = 0;
    int h1 = 41;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cnt46 = xn[i];
        out59 = out59 + 3;
        out59 = out59 + 1;
        acc49 = out59 + cnt46;
        cnt46 = cnt46 - out59;
        out59 = out59 * 33;
        acc49 = out59 * 62;
        cnt46 = out59;
        acc49 = cnt46 + acc49;
        if (cnt46 != 49) {
        cnt46 = out59;
        }
        yo[i] = acc49;
    }
}
int main() { test_func(); return 0; }

