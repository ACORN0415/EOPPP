// RTPG_1565: vars=6 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int v64 = 99;
    int val49 = 4;
    int cnt79 = -5;
    int b4 = 54;
    int z72 = -50;
    int out45 = 13975;
    int i;
    for (i = 0; i < 16; i++) {
        z72 = xn[i];
        val49 = z72 - cnt79;
        val49 = b4 + val49;
        b4 = v64;
        z72 = z72 + 5;
        b4 = z72 + -13;
        yo[i] = v64;
    }
}
int main() { test_func(); return 0; }

