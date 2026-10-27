// RTPG_79: vars=3 stmts=7
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int z70 = 2;
    float z53 = 65.03;
    int y44 = 4;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 50742;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        y44 = xn[i];
        z70 = xn[idx_arr[i]];
        z53 = z53 + 1;
        y44 = z53;
        z53 = z70 * -21;
        y44 = y44 + 1;
        z70 = z70 + z70;
        z53 = z53 - y44;
        z70 = z70;
        yo[i] = y44;
    }
}
int main() { test_func(); return 0; }

