// RTPG_6819: vars=3 stmts=4
void test_func(void) {
    int tmp62 = 100;
    int out96 = 80;
    int z28 = 42;
    int h0 = -34;
    int sv0 = 0;
    int h1 = 86;
    int sv1 = 0;
    int i;
    for (i = 0; i < 99; i++) {
        tmp62 = tmp62 * 19;
        tmp62 = tmp62 + z28;
        z28 = z28;
        tmp62 = z28 * 1;
        if (tmp62 > -1) goto done;
        if (tmp62 >= 83) {
        tmp62 = z28 - tmp62;
        }
    }
done:
    out96 = 0;
}
int main() { test_func(); return 0; }

