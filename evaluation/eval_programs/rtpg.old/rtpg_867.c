// RTPG_867: vars=7 stmts=7
void test_func(void) {
    int hi65 = 8;
    int hi61 = 35277;
    int sum45 = 10;
    int cur20 = 40392;
    int prev59 = 87;
    int out79 = 52166;
    int out11 = 46;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 12474;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        sum45 = hi65 + hi61;
        prev59 = sum45 - 2059;
        out11 = hi65 - cur20;
        cur20 = cur20 - 1;
        cur20 = prev59 * 63;
        hi65 = sum45 * 6;
        cur20 = prev59 + hi61;
    }
}
int main() { test_func(); return 0; }

