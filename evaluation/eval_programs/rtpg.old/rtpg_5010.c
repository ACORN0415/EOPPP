// RTPG_5010: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int c18 = 1;
    double res25 = 84.91;
    int cnt70 = 44;
    int h0 = 53982;
    int sv0 = 0;
    int h1 = 32159;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res25 = xn[i];
        c18 = res25;
        cnt70 = cnt70 * 2;
        res25 = c18 * 4;
        res25 = cnt70 + cnt70;
        cnt70 = cnt70 - 3;
        res25 = cnt70;
        res25 = res25 + 4;
        yo[i] = c18;
    }
}
int main() { test_func(); return 0; }

