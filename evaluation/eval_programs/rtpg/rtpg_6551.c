// RTPG_6551: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int lo47 = 6;
    int v47 = 1;
    int val96 = 6;
    int h0 = 58;
    int sv0 = 0;
    int h1 = 61;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        val96 = xn[i];
        v47 = v47 * 68;
        val96 = v47 - val96;
        v47 = v47 + 1;
        lo47 = val96 + lo47;
        yo[i] = v47;
    }
}
int main() { test_func(); return 0; }

