// RTPG_3649: vars=7 stmts=6
void test_func(void) {
    int z2 = 24;
    int lo94 = -4;
    int val65 = 85;
    int hi27 = 10382;
    int cnt56 = -33;
    int sum51 = 98;
    int out13 = -21;
    int i;
    for (i = 0; i < 20; i++) {
        z2 = sum51;
        lo94 = val65 + 8;
        hi27 = val65 - cnt56;
        hi27 = hi27 - val65;
        out13 = lo94 + sum51;
        z2 = out13 + z2;
        if (z2 > -5) goto done;
    }
done:
    val65 = 0;
}
int main() { test_func(); return 0; }

