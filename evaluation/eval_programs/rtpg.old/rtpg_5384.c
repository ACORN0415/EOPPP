// RTPG_5384: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev17 = -14;
    int z62 = 9;
    int lo79 = -49;
    int out10 = 8;
    int dat14 = -28;
    int h0 = 95;
    int sv0 = 0;
    int h1 = 52031;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        prev17 = xn[i];
        out10 = z62 * 73;
        out10 = out10 + 1;
        out10 = dat14 + prev17;
        prev17 = out10 + dat14;
        dat14 = dat14 + 37828;
        if (prev17 < 53) {
        dat14 = dat14 + 4;
        }
        yo[i] = z62;
    }
}
int main() { test_func(); return 0; }

