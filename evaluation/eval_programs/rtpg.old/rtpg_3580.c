// RTPG_3580: vars=4 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int sum21 = 61899;
    int val27 = 20464;
    int out70 = 8;
    int acc92 = 51;
    int i;
    for (i = 0; i < 64; i++) {
        sum21 = xn[i];
        acc92 = val27 + acc92;
        out70 = out70 + sum21;
        val27 = val27 - val27;
        out70 = out70 - 53;
        out70 = out70 + 3;
        val27 = out70 - val27;
        sum21 = val27;
        val27 = sum21 + out70;
        out70 = out70 + acc92;
        val27 = sum21 + -13;
        if (out70 < -31) {
        val27 = val27 - 4;
        }
        yo[i] = acc92;
    }
}
int main() { test_func(); return 0; }

