// RTPG_7533: vars=3 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int v71 = 48;
    int out84 = 97;
    int v13 = 47;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v13 = xn[i];
        out84 = out84 - 4;
        v13 = out84;
        out84 = v71 * 42461;
        v13 = v71;
        v13 = v13 - 5;
        out84 = v71;
        v71 = v13 + -20;
        v71 = out84 - v13;
        yo[i] = v71;
    }
}
int main() { test_func(); return 0; }

