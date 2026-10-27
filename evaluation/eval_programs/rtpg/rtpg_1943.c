// RTPG_1943: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev59 = 29;
    int hi76 = 5942;
    int cur68 = 26411;
    int out84 = 46;
    int b58 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        prev59 = xn[i];
        prev59 = prev59 - 28;
        prev59 = out84 + prev59;
        prev59 = b58 + hi76;
        b58 = b58 + 1;
        cur68 = cur68 - hi76;
        yo[i] = hi76;
    }
}
int main() { test_func(); return 0; }

