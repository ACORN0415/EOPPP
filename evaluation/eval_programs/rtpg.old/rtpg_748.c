// RTPG_748: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int dat56 = 47587;
    int y81 = 31;
    int z34 = 3;
    int h0 = 44;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat56 = xn[i];
        y81 = z34 - y81;
        z34 = z34 - y81;
        y81 = dat56 + dat56;
        z34 = dat56 * 10737;
        y81 = dat56 * 0;
        y81 = dat56 + y81;
        y81 = y81 - 96;
        if (dat56 > 16) goto done;
        yo[i] = dat56;
    }
done:
    z34 = 0;
}
int main() { test_func(); return 0; }

