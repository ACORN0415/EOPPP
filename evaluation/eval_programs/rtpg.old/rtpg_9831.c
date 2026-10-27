// RTPG_9831: vars=4 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int hi57 = 35;
    int val9 = -18;
    int c41 = 10;
    int cnt84 = 94;
    int i;
    for (i = 0; i < 32; i++) {
        cnt84 = xn[i];
        val9 = hi57;
        val9 = cnt84;
        cnt84 = hi57 + c41;
        cnt84 = val9 - 59;
        cnt84 = val9 - 7;
        cnt84 = cnt84 + 1;
        cnt84 = cnt84 + 1;
        cnt84 = val9 + hi57;
        yo[i] = val9;
    }
}
int main() { test_func(); return 0; }

