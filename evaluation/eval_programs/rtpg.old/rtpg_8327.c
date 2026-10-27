// RTPG_8327: vars=3 stmts=7
int idx_arr[16];
void test_func(void) {
    int x15 = 2;
    int val83 = 54306;
    int tmp14 = 90;
    int i;
    for (i = 0; i < 72; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        val83 = val83;
        val83 = val83 + tmp14;
        x15 = val83;
        x15 = x15 - tmp14;
        x15 = x15;
        val83 = tmp14 - x15;
        tmp14 = tmp14 - 24;
        }
    }
}
int main() { test_func(); return 0; }

