// RTPG_7931: vars=7 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int hi55 = 40746;
    double a81 = 20.67;
    float sum64 = 25.00;
    int v15 = 21;
    int hi28 = -35;
    int z34 = -35;
    int res8 = 62934;
    int h0 = -40;
    int sv0 = 0;
    int h1 = -1;
    int sv1 = 0;
    int h2 = 1;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        z34 = xn[i];
        res8 = res8 - 4;
        sum64 = z34 + 45;
        if (a81 != -20) {
        res8 = res8 - 1;
        }
        yo[i] = sum64;
    }
}
int main() { test_func(); return 0; }

