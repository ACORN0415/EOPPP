// RTPG_9126: vars=5 stmts=9
void test_func(void) {
    int acc4 = 91;
    int out38 = 93;
    int sum49 = -15;
    int out68 = 16235;
    int v0 = -42;
    int h0 = 52;
    int sv0 = 0;
    int h1 = -12;
    int sv1 = 0;
    int i;
    for (i = 0; i < 100; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        sum49 = v0;
        out38 = v0 + out38;
        v0 = v0 - 2;
        acc4 = acc4 - 30978;
        v0 = v0 + 9;
        out38 = v0 + 90;
        out68 = out68 + sum49;
        v0 = v0 - 1;
        acc4 = out68 + out38;
        }
    }
}
int main() { test_func(); return 0; }

