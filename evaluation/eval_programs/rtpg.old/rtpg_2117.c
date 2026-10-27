// RTPG_2117: vars=5 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int cur16 = 2;
    int tmp46 = 76;
    int acc42 = 23171;
    int cnt20 = 0;
    int res51 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        res51 = xn[i];
        cur16 = cur16 - 5;
        cur16 = acc42 + tmp46;
        cur16 = cnt20 + acc42;
        tmp46 = cnt20 + 58028;
        cur16 = acc42 + res51;
        acc42 = tmp46 + acc42;
        tmp46 = acc42 + 56192;
        yo[i] = tmp46;
    }
}
int main() { test_func(); return 0; }

