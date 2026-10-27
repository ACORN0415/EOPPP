// RTPG_6708: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int c82 = -31;
    int v47 = 24274;
    int tmp53 = -37;
    int h0 = 41589;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        v47 = xn[i];
        tmp53 = c82 - v47;
        c82 = v47 | c82;
        tmp53 = tmp53 + 1;
        c82 = tmp53 % v47;
        v47 = v47 * -7;
        if (c82 == -29) {
        tmp53 = tmp53 - v47;
        }
        yo[i] = c82;
    }
}
int main() { test_func(); return 0; }

