// RTPG_5762: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int val32 = 55017;
    int v27 = 72;
    int z87 = 47;
    int h0 = 48;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v27 = xn[i];
        z87 = z87 / z87;
        v27 = z87 * 67;
        z87 = val32 * 59;
        v27 = val32 - z87;
        yo[i] = z87;
    }
done:
    v27 = 0;
}
int main() { test_func(); return 0; }

