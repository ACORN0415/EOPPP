// RTPG_2773: vars=9 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int v71 = 15;
    int cnt70 = 25;
    int acc99 = 6;
    int z76 = 6;
    int acc59 = 35;
    int c76 = 75;
    int out97 = 34;
    int b54 = 0;
    int prev81 = 71;
    int i;
    for (i = 0; i < 16; i++) {
        out97 = xn[i];
        acc99 = cnt70 - 9;
        cnt70 = acc59 - acc99;
        z76 = v71 / c76;
        prev81 = out97 + z76;
        cnt70 = b54 - out97;
        acc59 = out97 + b54;
        yo[i] = v71;
    }
}
int main() { test_func(); return 0; }

