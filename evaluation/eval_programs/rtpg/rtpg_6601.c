// RTPG_6601: vars=4 stmts=5
int idx_arr[16];
void test_func(void) {
    int res33 = 1;
    int out71 = 34;
    int sum57 = 55;
    int c31 = 2;
    int i;
    for (i = 0; i < 8; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        res33 = res33 - 5;
        c31 = c31 + out71;
        sum57 = out71 + c31;
        out71 = sum57 + 22504;
        sum57 = c31 - res33;
        }
    }
}
int main() { test_func(); return 0; }

