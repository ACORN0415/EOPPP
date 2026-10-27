// RTPG_8477: vars=4 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int tmp25 = 65;
    int acc12 = 25;
    int lo99 = 38;
    int out52 = -49;
    int h0 = -6;
    int sv0 = 0;
    int h1 = 38126;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        lo99 = xn[i];
        tmp25 = acc12 + tmp25;
        out52 = tmp25 * 30;
        acc12 = lo99 + tmp25;
        lo99 = tmp25 * 4;
        out52 = lo99 * 10;
        acc12 = out52 * 42237;
        lo99 = tmp25 - 2;
        yo[i] = tmp25;
    }
}
int main() { test_func(); return 0; }

