// RTPG_7979: vars=3 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int dat26 = 29;
    int tmp24 = 3;
    int prev19 = 88;
    int i;
    for (i = 0; i < 64; i++) {
        prev19 = xn[i];
        tmp24 = dat26 + prev19;
        prev19 = tmp24 + dat26;
        dat26 = prev19 % dat26;
        dat26 = prev19 + 24017;
        dat26 = dat26 - 8;
        tmp24 = prev19;
        prev19 = dat26 / prev19;
        yo[i] = prev19;
    }
}
int main() { test_func(); return 0; }

