// RTPG_1979: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int b53 = 47326;
    int cur56 = 22369;
    int cur97 = 8;
    int h0 = -3;
    int sv0 = 0;
    int h1 = -23;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b53 = xn[i];
        cur97 = b53;
        b53 = cur56 - 1;
        b53 = b53 - 4;
        cur56 = cur97;
        yo[i] = cur56;
    }
}
int main() { test_func(); return 0; }

