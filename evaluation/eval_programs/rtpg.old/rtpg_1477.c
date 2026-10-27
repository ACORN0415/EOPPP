// RTPG_1477: vars=6 stmts=2
void test_func(void) {
    int prev43 = 13218;
    int tmp1 = 6;
    int prev80 = -13;
    int c81 = 3;
    int dat31 = 14;
    int z57 = 12;
    int h0 = 7892;
    int sv0 = 0;
    int h1 = 48371;
    int sv1 = 0;
    int i;
    for (i = 0; i < 59; i++) {
        dat31 = dat31 + 1;
        z57 = prev43 + z57;
        if (dat31 > 3) goto done;
        if (dat31 == 49) {
        dat31 = dat31 - 5;
        }
    }
done:
    tmp1 = 0;
}
int main() { test_func(); return 0; }

