// RTPG_2729: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int y82 = 73;
    int v71 = 28;
    int prev5 = 25;
    int dat30 = 41;
    int y77 = 16;
    int i;
    for (i = 0; i < 64; i++) {
        v71 = xn[i];
        prev5 = prev5 + 3;
        y77 = y77 + -50;
        yo[i] = prev5;
    }
}
int main() { test_func(); return 0; }

