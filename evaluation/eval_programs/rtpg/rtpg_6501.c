// RTPG_6501: vars=5 stmts=7
void test_func(void) {
    int cur9 = 22;
    int out4 = 20;
    int prev59 = 26;
    int out36 = 61009;
    int out63 = 144;
    int h0 = 79;
    int sv0 = 0;
    int h1 = -22;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        prev59 = prev59 - 1;
        out4 = out4 * 15;
        prev59 = cur9 + out4;
        out63 = prev59 | out63;
        out4 = out4 + out4;
        cur9 = out4 % out63;
        out4 = cur9 - prev59;
    }
}
int main() { test_func(); return 0; }

