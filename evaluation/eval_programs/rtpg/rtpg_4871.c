// RTPG_4871: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int lo98 = 16;
    int x56 = 25754;
    int sum33 = 11;
    int h0 = 40;
    int sv0 = 0;
    int h1 = 47;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        sum33 = xn[i];
        x56 = sum33 * 56553;
        x56 = sum33 * 48;
        lo98 = lo98 + 4;
        sum33 = sum33 + 28;
        sum33 = sum33 + 1;
        yo[i] = x56;
    }
}
int main() { test_func(); return 0; }

