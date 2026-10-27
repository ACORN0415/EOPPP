// RTPG_5470: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int dat14 = -14;
    int prev17 = 9;
    int lo79 = -49;
    int z62 = 8;
    int out10 = -28;
    int h0 = 95;
    int sv0 = 0;
    int h1 = 52031;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat14 = xn[i];
        z62 = prev17 * 73;
        z62 = z62 + 1;
        z62 = out10 + dat14;
        dat14 = z62 + out10;
        out10 = out10 + 37828;
        if (dat14 < 53) {
        out10 = out10 + 4;
        }
        yo[i] = prev17;
    }
}
int main() { test_func(); return 0; }

