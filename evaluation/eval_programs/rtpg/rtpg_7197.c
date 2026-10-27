// RTPG_7197: vars=9 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int prev10 = 36;
    int dat25 = 7;
    int c30 = 31;
    int c15 = 35;
    int res54 = -34;
    int x76 = 16;
    int z18 = 49;
    int acc73 = 0;
    int lo89 = 70;
    int i;
    for (i = 0; i < 32; i++) {
        dat25 = xn[i];
        x76 = c30 + prev10;
        res54 = prev10 - 78;
        lo89 = dat25 + c15;
        dat25 = acc73 - c30;
        prev10 = acc73 + dat25;
        yo[i] = prev10;
    }
}
int main() { test_func(); return 0; }

