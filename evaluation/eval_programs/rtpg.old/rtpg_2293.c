// RTPG_2293: vars=4 stmts=6
int idx_arr[16];
void test_func(void) {
    int z55 = 22;
    int c78 = 2;
    int sum84 = -6;
    int x75 = 3;
    int i;
    for (i = 0; i < 71; i++) {
        x75 = xn[idx_arr[i]];
        sum84 = sum84 + 6;
        x75 = x75 - 2;
        sum84 = sum84 - 3;
        z55 = x75 - z55;
        sum84 = c78 - x75;
        x75 = sum84 + sum84;
    }
}
int main() { test_func(); return 0; }

