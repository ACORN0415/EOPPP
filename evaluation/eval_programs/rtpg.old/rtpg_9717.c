// RTPG_9717: vars=6 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int x9 = 9;
    int dat13 = 3;
    int cur64 = 20;
    int tmp70 = 5;
    int z12 = 5;
    int out16 = 2187;
    int h0 = 55;
    int sv0 = 0;
    int h1 = 26301;
    int sv1 = 0;
    int i;
    for (i = 0; i < 88; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        cur64 = x9;
        cur64 = cur64 + 2;
        dat13 = cur64;
        x9 = z12 + out16;
        dat13 = z12 + x9;
        }
    }
}
int main() { test_func(); return 0; }

