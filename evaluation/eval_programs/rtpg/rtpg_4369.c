// RTPG_4369: vars=5 stmts=5
int idx_arr[64];
void test_func(void) {
    int dat24 = 89;
    int prev26 = 43;
    int y47 = 4;
    int tmp18 = 1;
    int z61 = 3;
    int i;
    for (i = 0; i < 92; i++) {
        y47 = xn[idx_arr[i]];
        y47 = dat24;
        dat24 = prev26 - z61;
        y47 = y47 - 2;
        z61 = prev26 - tmp18;
        z61 = z61 - 1;
        if (tmp18 >= 47) {
        tmp18 = tmp18 - 5;
        }
    }
}
int main() { test_func(); return 0; }

