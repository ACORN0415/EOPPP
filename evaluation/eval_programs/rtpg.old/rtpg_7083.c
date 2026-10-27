// RTPG_7083: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int c85 = 19;
    int x47 = 35364;
    int z56 = 14002;
    int prev19 = 32332;
    int val29 = 9;
    int prev29 = 4;
    int out98 = 8;
    int i;
    for (i = 0; i < 16; i++) {
        prev29 = xn[i];
        c85 = prev19 | prev19;
        x47 = out98 - prev19;
        c85 = prev19 + 5;
        x47 = x47 | prev29;
        prev19 = out98 + val29;
        if (x47 < 22) {
        z56 = c85 + val29;
        }
        yo[i] = prev29;
    }
}
int main() { test_func(); return 0; }

