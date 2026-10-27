// RTPG_9063: vars=7 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int cnt96 = 17367;
    int v39 = 0;
    int a44 = 14;
    int acc19 = 38850;
    int c37 = 9;
    int x5 = 32581;
    int out13 = 94;
    int i;
    for (i = 0; i < 32; i++) {
        cnt96 = xn[i];
        acc19 = v39 + 8;
        acc19 = c37;
        a44 = c37 - out13;
        yo[i] = cnt96;
    }
}
int main() { test_func(); return 0; }

