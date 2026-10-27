// RTPG_3166: vars=4 stmts=2
int idx_arr[64];
void test_func(void) {
    int y25 = -38;
    int dat5 = 6603;
    int lo75 = 72;
    int hi3 = 5;
    int i;
    for (i = 0; i < 99; i++) {
        dat5 = xn[idx_arr[i]];
        hi3 = dat5;
        hi3 = y25;
    }
}
int main() { test_func(); return 0; }

