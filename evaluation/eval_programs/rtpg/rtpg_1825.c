// RTPG_1825: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int v16 = 26;
    int lo1 = 39;
    int x64 = 3;
    int lo77 = 10;
    int a43 = -15;
    int v24 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        a43 = xn[i];
        v24 = v24;
        a43 = a43 - 1;
        a43 = lo1 - 8;
        x64 = lo1 - lo1;
        v16 = v16 + 3;
        yo[i] = v24;
    }
}
int main() { test_func(); return 0; }

