// RTPG_1511: vars=3 stmts=7
void test_func(void) {
    int val16 = 12;
    int c14 = 4;
    int lo1 = 59399;
    int *ptr = &val16;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 48677;
    int sv1 = 0;
    int i;
    for (i = 0; i < 90; i++) {
        lo1 = c14 * 37;
        c14 = lo1 * 34651;
        c14 = val16 - lo1;
        lo1 = c14 * 40;
        val16 = c14 * 38;
        val16 = lo1 - val16;
        lo1 = val16 - 22;
        *ptr = *ptr + 3;
        if (lo1 > 15) goto done;
    }
done:
    val16 = 0;
}
int main() { test_func(); return 0; }

