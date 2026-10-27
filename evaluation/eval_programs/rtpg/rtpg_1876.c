// RTPG_1876: vars=4 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    float v92 = 75.28;
    int v74 = 41725;
    int z30 = 89;
    int cur79 = -17;
    int i;
    for (i = 0; i < 64; i++) {
        v92 = xn[i];
        v74 = v92 + v74;
        v92 = v74 / cur79;
        z30 = cur79 + 11458;
        cur79 = cur79 % z30;
        v74 = v92 - v92;
        z30 = z30 ^ v92;
        cur79 = v92 & v74;
        yo[i] = cur79;
    }
}
int main() { test_func(); return 0; }

