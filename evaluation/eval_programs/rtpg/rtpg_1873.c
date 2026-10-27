// RTPG_1873: vars=3 stmts=3
void test_func(void) {
    int x99 = 10;
    int lo8 = 44;
    int z87 = 30314;
    int i;
    for (i = 0; i < 63; i++) {
        lo8 = x99 - 45030;
        lo8 = x99;
        z87 = lo8;
        if (lo8 > 2) goto done;
    }
done:
    z87 = 0;
}
int main() { test_func(); return 0; }

