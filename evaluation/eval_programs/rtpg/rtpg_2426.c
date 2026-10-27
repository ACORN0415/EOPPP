// RTPG_2426: vars=7 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int prev14 = 6;
    int hi54 = 5;
    int a63 = 20917;
    int z33 = -17;
    int lo60 = 6;
    int z82 = 53;
    int a77 = 0;
    int h0 = 43;
    int sv0 = 0;
    int h1 = 53726;
    int sv1 = 0;
    int h2 = 15896;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        lo60 = xn[i];
        prev14 = z82 / lo60;
        z33 = z82;
        z33 = prev14 ^ z82;
        a63 = lo60 & z33;
        lo60 = a63 / a77;
        z33 = a77;
        a63 = lo60 & z82;
        prev14 = a63 - hi54;
        lo60 = z82 * 58;
        hi54 = a63 + lo60;
        lo60 = lo60 - 1;
        z82 = z33 - z82;
        if (hi54 > 36) {
        a63 = a63 + 2;
        }
        yo[i] = prev14;
    }
}
int main() { test_func(); return 0; }

