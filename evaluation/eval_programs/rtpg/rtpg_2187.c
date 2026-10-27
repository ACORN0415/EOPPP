// RTPG_2187: vars=5 stmts=2
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int z47 = 60;
    int b47 = 6;
    int tmp26 = 10;
    int out66 = -37;
    int cur50 = -47;
    int *ptr = &z47;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 40098;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        z47 = xn[i];
        b47 = xn[idx_arr[i]];
        z47 = cur50 + 631;
        tmp26 = b47 - out66;
        *ptr = *ptr + 4;
        yo[i] = cur50;
    }
}
int main() { test_func(); return 0; }

