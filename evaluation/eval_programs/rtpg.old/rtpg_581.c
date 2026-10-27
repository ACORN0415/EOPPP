// RTPG_581: vars=3 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int y21 = -29;
    int z54 = 19;
    int y95 = 59;
    int i;
    for (i = 0; i < 64; i++) {
        y95 = xn[i];
        y95 = xn[idx_arr[i]];
        y21 = y95 + y21;
        y21 = y21 / y95;
        y95 = y95 + y21;
        z54 = y21 - 1;
        if (y95 == 45) {
        y21 = y21 - z54;
        }
        yo[i] = y21;
    }
}
int main() { test_func(); return 0; }

