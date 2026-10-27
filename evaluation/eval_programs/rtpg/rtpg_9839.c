// RTPG_9839: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int acc5 = 47;
    int hi88 = 45;
    int cnt97 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        acc5 = xn[i];
        cnt97 = acc5 + 7;
        hi88 = hi88 - acc5;
        yo[i] = hi88;
    }
}
int main() { test_func(); return 0; }

