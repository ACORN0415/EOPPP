// RTPG_4902: vars=8 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int v63 = 2;
    int b23 = -28;
    int out82 = 24740;
    int prev59 = 2;
    int tmp76 = 40;
    int b86 = 6;
    int val90 = 15;
    int prev68 = -13;
    int h0 = -26;
    int sv0 = 0;
    int h1 = 44;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        prev68 = xn[i];
        val90 = b23 * 77;
        b86 = v63 * 11227;
        v63 = prev68 * 61648;
        out82 = prev68 - -33;
        b86 = tmp76 - prev68;
        b23 = out82 - v63;
        v63 = tmp76 + prev59;
        out82 = val90 - v63;
        tmp76 = tmp76 + 3;
        tmp76 = prev68 + 2;
        if (v63 <= -44) {
        b23 = b23 + val90;
        }
        yo[i] = tmp76;
    }
}
int main() { test_func(); return 0; }

