// RTPG_2516: vars=3 stmts=9
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int dat42 = -44;
    int cur40 = 9;
    int dat7 = 97;
    int h0 = -4;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        dat7 = xn[i];
        cur40 = xn[idx_arr[i]];
        cur40 = dat42 * 41;
        dat42 = dat42 + 2;
        dat7 = dat7 - 9;
        cur40 = dat7 + cur40;
        cur40 = dat7 + dat7;
        dat7 = cur40 - 9;
        cur40 = dat7 + dat42;
        dat7 = dat42 * 35;
        dat7 = dat7 - dat42;
        if (cur40 <= 97) {
        dat7 = cur40;
        }
        yo[i] = dat7;
    }
}
int main() { test_func(); return 0; }

