// RTPG_3515: vars=8 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int z98 = 21375;
    int cnt86 = 63572;
    double cur27 = 38.46;
    int y43 = 9605;
    int val72 = 47;
    int out90 = 28;
    int y76 = 43;
    int prev81 = 7;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int h2 = 10;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        y76 = xn[i];
        z98 = xn[idx_arr[i]];
        y43 = prev81 / cur27;
        y43 = y43 - 56;
        y43 = y43 + 4;
        cnt86 = z98 ^ cur27;
        yo[i] = cnt86;
    }
}
int main() { test_func(); return 0; }

