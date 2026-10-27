// RTPG_5972: vars=3 stmts=6
void test_func(void) {
    int v6 = -38;
    int out11 = 28;
    int res50 = -15;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 11; i++) {
        v6 = v6 + res50;
        v6 = res50 * 50;
        res50 = res50 - 4;
        out11 = v6 - 10;
        res50 = res50 - 1;
        out11 = v6 - res50;
    }
}
int main() { test_func(); return 0; }

