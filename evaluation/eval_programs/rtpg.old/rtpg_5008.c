// RTPG_5008: vars=9 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int prev37 = 0;
    int lo76 = 0;
    int v12 = 53754;
    int val45 = 3;
    int sum96 = 59550;
    int out19 = 80;
    int v70 = 19;
    int hi90 = 33193;
    int z54 = 2;
    int h0 = 67;
    int sv0 = 0;
    int h1 = 63478;
    int sv1 = 0;
    int h2 = -29;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        v12 = xn[i];
        val45 = out19 - lo76;
        prev37 = sum96 / prev37;
        z54 = out19 * 8;
        if (z54 >= 28) {
        prev37 = prev37 - 2;
        }
        yo[i] = val45;
    }
}
int main() { test_func(); return 0; }

