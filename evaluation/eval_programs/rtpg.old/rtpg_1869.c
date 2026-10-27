// RTPG_1869: vars=7 stmts=5
int idx_arr[32];
void test_func(void) {
    int b9 = 1;
    int val50 = 358;
    int tmp78 = -42;
    int lo14 = 17113;
    int hi90 = 5;
    int res55 = 15800;
    int z71 = 18011;
    int i;
    for (i = 0; i < 12; i++) {
        hi90 = xn[idx_arr[i]];
        res55 = b9;
        val50 = val50;
        lo14 = res55 + hi90;
        lo14 = res55;
        hi90 = tmp78;
    }
}
int main() { test_func(); return 0; }

