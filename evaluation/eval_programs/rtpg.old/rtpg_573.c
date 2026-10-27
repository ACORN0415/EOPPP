// RTPG_573: vars=9 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int cur74 = 8051;
    int out89 = 9;
    int hi79 = -28;
    int prev55 = 7;
    int res71 = 82;
    int val91 = 88;
    int z97 = 8656;
    int v19 = -22;
    int x55 = -47;
    int h0 = 21;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out89 = xn[i];
        z97 = prev55 * 64;
        res71 = out89;
        hi79 = out89 - cur74;
        hi79 = v19 - hi79;
        yo[i] = z97;
    }
}
int main() { test_func(); return 0; }

