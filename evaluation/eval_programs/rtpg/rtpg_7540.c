// RTPG_7540: vars=7 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int lo55 = -42;
    int v59 = 60672;
    int z35 = 29;
    int c77 = 1899;
    int acc27 = 12;
    int tmp13 = 5;
    int out2 = 5;
    int h0 = -39;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v59 = xn[i];
        acc27 = out2 + v59;
        tmp13 = z35 * -10;
        v59 = out2 - lo55;
        acc27 = lo55 - c77;
        c77 = tmp13 + 41202;
        acc27 = c77;
        c77 = lo55 * 45;
        lo55 = out2 - v59;
        if (out2 > 50) {
        v59 = z35 - c77;
        }
        yo[i] = tmp13;
    }
}
int main() { test_func(); return 0; }

