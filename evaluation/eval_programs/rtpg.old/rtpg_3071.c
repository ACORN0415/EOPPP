// RTPG_3071: vars=5 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int v18 = 4;
    double dat23 = 27.00;
    int sum88 = 49059;
    float tmp35 = 30.15;
    int out98 = 3;
    int h0 = 7254;
    int sv0 = 0;
    int h1 = 27924;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        out98 = xn[i];
        sum88 = v18;
        v18 = v18 - dat23;
        out98 = v18 + out98;
        tmp35 = sum88 * 21641;
        out98 = tmp35 * 48876;
        sum88 = v18 - sum88;
        sum88 = v18 & out98;
        yo[i] = sum88;
    }
}
int main() { test_func(); return 0; }

