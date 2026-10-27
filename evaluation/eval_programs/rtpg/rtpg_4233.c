// RTPG_4233: vars=3 stmts=8
void test_func(void) {
    int out65 = -9;
    int res19 = 23261;
    int c56 = 62;
    int *ptr = &out65;
    int h0 = 7429;
    int sv0 = 0;
    int h1 = 77;
    int sv1 = 0;
    int i;
    for (i = 0; i < 76; i++) {
        out65 = res19 + out65;
        res19 = out65 * 10158;
        res19 = res19 - -33;
        res19 = res19 - 7;
        res19 = out65 - 49;
        res19 = c56 * 27;
        c56 = c56 - out65;
        c56 = out65 * 70;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

