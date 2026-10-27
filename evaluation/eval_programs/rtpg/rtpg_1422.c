// RTPG_1422: vars=8 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int y41 = 10;
    int tmp98 = 4;
    int dat54 = 31;
    int prev19 = 12041;
    int tmp27 = 15241;
    int cnt7 = 98;
    int acc33 = 65217;
    int b59 = 17;
    int i;
    for (i = 0; i < 32; i++) {
        tmp27 = xn[i];
        prev19 = b59 - prev19;
        y41 = prev19 - 49;
        cnt7 = b59 + dat54;
        yo[i] = prev19;
    }
}
int main() { test_func(); return 0; }

