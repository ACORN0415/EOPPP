// RTPG_1535: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int acc21 = 0;
    int v36 = 43724;
    int a3 = 60;
    int h0 = 40;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v36 = xn[i];
        acc21 = acc21 - 4;
        v36 = acc21 - a3;
        a3 = a3 + 2;
        yo[i] = v36;
    }
}
int main() { test_func(); return 0; }

