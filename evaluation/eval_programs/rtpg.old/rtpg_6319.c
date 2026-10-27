// RTPG_6319: vars=4 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int prev5 = 40;
    int c64 = 8412;
    int v1 = 20;
    int val68 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        val68 = xn[i];
        prev5 = v1 - -24;
        prev5 = prev5 - c64;
        val68 = val68;
        prev5 = val68;
        c64 = v1 - 6;
        prev5 = c64 - v1;
        yo[i] = c64;
    }
}
int main() { test_func(); return 0; }

