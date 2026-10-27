// RTPG_2350: vars=4 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int y4 = 23;
    int val74 = 31;
    int cur7 = 0;
    int c71 = 57425;
    int i;
    for (i = 0; i < 64; i++) {
        val74 = xn[i];
        cur7 = c71 - 10;
        c71 = c71 - 5;
        val74 = c71 & c71;
        cur7 = cur7;
        y4 = c71 - val74;
        c71 = cur7;
        c71 = y4 & y4;
        yo[i] = y4;
    }
}
int main() { test_func(); return 0; }

