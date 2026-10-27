// RTPG_9935: vars=6 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int cur64 = 9;
    int z12 = 3;
    int dat13 = 20;
    int tmp70 = 5;
    int x9 = 5;
    int out16 = 2187;
    int h0 = 55;
    int sv0 = 0;
    int h1 = 26301;
    int sv1 = 0;
    int i;
    for (i = 0; i < 88; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        dat13 = cur64;
        dat13 = dat13 + 2;
        z12 = dat13;
        cur64 = x9 + out16;
        z12 = x9 + cur64;
        }
    }
}
int main() { test_func(); return 0; }

