// RTPG_7671: vars=3 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int hi15 = 65528;
    int dat59 = 810;
    int val6 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        hi15 = xn[i];
        dat59 = dat59 | hi15;
        val6 = val6 & dat59;
        val6 = dat59 | dat59;
        dat59 = dat59 + hi15;
        val6 = val6 + 5;
        hi15 = hi15 - 5;
        val6 = hi15 - 4;
        hi15 = dat59 + hi15;
        yo[i] = hi15;
    }
}
int main() { test_func(); return 0; }

