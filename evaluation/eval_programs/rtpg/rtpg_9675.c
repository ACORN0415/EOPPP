// RTPG_9675: vars=7 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int lo84 = 3;
    int cur31 = 49;
    int acc24 = 33782;
    double z32 = 4.12;
    float cur94 = 33.48;
    int tmp73 = 51186;
    int hi90 = -32;
    int i;
    for (i = 0; i < 64; i++) {
        acc24 = xn[i];
        tmp73 = hi90 + z32;
        cur94 = hi90 + 6;
        hi90 = hi90 + 2;
        acc24 = cur31;
        hi90 = cur94 + 29;
        cur94 = tmp73;
        z32 = tmp73 + hi90;
        cur31 = cur94;
        yo[i] = cur94;
    }
}
int main() { test_func(); return 0; }

