// RTPG_8965: vars=9 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int prev55 = 35503;
    int out35 = 68;
    int tmp14 = 4769;
    int c24 = 25451;
    int z16 = 32385;
    int tmp27 = 4;
    int acc3 = 4;
    int lo24 = 89;
    int cur52 = 5;
    int h0 = 47;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int h2 = 8;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        z16 = xn[i];
        tmp27 = acc3 * 5;
        tmp14 = tmp14 + acc3;
        z16 = c24 + z16;
        acc3 = acc3 + 1;
        lo24 = out35 * 8;
        out35 = z16;
        if (out35 == -46) {
        acc3 = lo24 - z16;
        }
        yo[i] = tmp27;
    }
}
int main() { test_func(); return 0; }

