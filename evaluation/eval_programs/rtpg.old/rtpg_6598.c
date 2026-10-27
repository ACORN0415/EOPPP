// RTPG_6598: vars=7 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    float b47 = 90.10;
    int lo48 = 58154;
    double v83 = 96.22;
    int x76 = 2;
    int out83 = 47;
    int cur50 = 52969;
    int y76 = 1;
    int i;
    for (i = 0; i < 32; i++) {
        v83 = xn[i];
        x76 = out83 + x76;
        v83 = out83 + out83;
        out83 = v83;
        y76 = x76 - out83;
        yo[i] = v83;
    }
}
int main() { test_func(); return 0; }

