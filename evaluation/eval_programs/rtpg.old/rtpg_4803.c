// RTPG_4803: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int lo98 = 16;
    int sum33 = 25754;
    int x56 = 11;
    int h0 = 40;
    int sv0 = 0;
    int h1 = 47;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x56 = xn[i];
        sum33 = x56 * 56553;
        sum33 = x56 * 48;
        lo98 = lo98 + 4;
        x56 = x56 + 28;
        x56 = x56 + 1;
        yo[i] = sum33;
    }
}
int main() { test_func(); return 0; }

