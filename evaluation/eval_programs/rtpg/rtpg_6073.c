// RTPG_6073: vars=3 stmts=6
void test_func(void) {
    int out11 = -38;
    int v6 = 28;
    int res50 = -15;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 11; i++) {
        out11 = out11 + res50;
        out11 = res50 * 50;
        res50 = res50 - 4;
        v6 = out11 - 10;
        res50 = res50 - 1;
        v6 = out11 - res50;
    }
}
int main() { test_func(); return 0; }

