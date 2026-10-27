// RTPG_7215: vars=7 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int z47 = 24;
    int cnt71 = 18948;
    int v65 = 7;
    int prev71 = -17;
    int v16 = 69;
    int tmp62 = 58;
    int y53 = 61;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        prev71 = xn[i];
        v16 = tmp62 + z47;
        y53 = y53 - z47;
        prev71 = y53 * 61851;
        yo[i] = y53;
    }
}
int main() { test_func(); return 0; }

