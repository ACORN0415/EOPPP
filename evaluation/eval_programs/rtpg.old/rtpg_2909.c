// RTPG_2909: vars=6 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int val11 = 11;
    int x77 = 47731;
    int lo96 = 4;
    int a94 = 16;
    int hi93 = 43862;
    int y29 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        val11 = xn[i];
        y29 = a94;
        lo96 = val11 + a94;
        x77 = a94;
        lo96 = hi93 + x77;
        x77 = y29 - x77;
        x77 = x77 - 3;
        hi93 = lo96;
        if (x77 > -41) {
        y29 = hi93;
        }
        yo[i] = hi93;
    }
}
int main() { test_func(); return 0; }

