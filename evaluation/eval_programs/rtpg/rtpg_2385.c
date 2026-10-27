// RTPG_2385: vars=6 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int b10 = 6;
    int v32 = 17;
    int z76 = 3;
    int lo61 = -25;
    int z63 = 35253;
    int v28 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        b10 = xn[i];
        z76 = b10 - lo61;
        z76 = b10 + v32;
        b10 = lo61;
        v28 = lo61 - 4;
        z63 = v32;
        b10 = b10 - 4;
        v32 = v32 - 1;
        v32 = v28 + lo61;
        yo[i] = b10;
    }
}
int main() { test_func(); return 0; }

