// RTPG_9425: vars=8 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int z92 = 3;
    double tmp66 = 97.39;
    int v11 = 5;
    double c74 = 45.29;
    int hi47 = 3;
    int a19 = 38;
    int c6 = 27276;
    int lo78 = 24;
    int i;
    for (i = 0; i < 64; i++) {
        c74 = xn[i];
        c6 = c6 + 5;
        z92 = c6;
        lo78 = hi47 + 2;
        z92 = lo78;
        lo78 = v11 + 6;
        tmp66 = tmp66 - 1;
        c6 = tmp66 - c6;
        v11 = tmp66;
        c6 = lo78 + 4;
        c6 = a19 + v11;
        yo[i] = v11;
    }
}
int main() { test_func(); return 0; }

