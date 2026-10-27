// RTPG_4596: vars=7 stmts=6
int idx_arr[16];
void test_func(void) {
    int v86 = 30541;
    int b81 = 46750;
    int res31 = 4660;
    int x42 = 30;
    int val73 = 30976;
    int a84 = 43;
    int out70 = 2;
    int i;
    for (i = 0; i < 97; i++) {
        res31 = xn[idx_arr[i]];
        res31 = res31 + 3;
        res31 = res31 + 4;
        val73 = b81;
        out70 = res31;
        a84 = a84 + 5;
        out70 = res31;
        if (v86 < -6) {
        b81 = b81;
        }
    }
}
int main() { test_func(); return 0; }

