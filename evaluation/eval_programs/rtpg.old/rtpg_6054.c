// RTPG_6054: vars=6 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int c55 = 2;
    int lo67 = 21687;
    int b80 = 1;
    int c56 = -7;
    int acc28 = 40;
    int sum74 = 42961;
    int h0 = 85;
    int sv0 = 0;
    int h1 = -35;
    int sv1 = 0;
    int h2 = -41;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        acc28 = xn[i];
        b80 = c55;
        b80 = acc28 - 45;
        c55 = lo67;
        sum74 = c56 * 77;
        c56 = b80 * 6;
        c56 = c56;
        sum74 = c55 * 8;
        c55 = c55 * -21;
        c56 = c56 + sum74;
        c55 = acc28 * 31052;
        c55 = acc28 - b80;
        lo67 = acc28 * 28033;
        yo[i] = c55;
    }
}
int main() { test_func(); return 0; }

