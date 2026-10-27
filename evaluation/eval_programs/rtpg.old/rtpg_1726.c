// RTPG_1726: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int cnt88 = 5;
    int prev68 = 7;
    float y23 = 33.82;
    int acc4 = 18;
    int v19 = -25;
    int i;
    for (i = 0; i < 16; i++) {
        acc4 = xn[i];
        y23 = y23 - cnt88;
        cnt88 = cnt88 + 4;
        cnt88 = acc4;
        v19 = acc4 - cnt88;
        y23 = acc4;
        yo[i] = cnt88;
    }
}
int main() { test_func(); return 0; }

