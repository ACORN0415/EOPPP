// RTPG_7619: vars=4 stmts=8
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int sum64 = 8;
    int acc36 = 3;
    int val66 = 4;
    int cur66 = 1;
    int i;
    for (i = 0; i < 95; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        val66 = val66 - sum64;
        val66 = val66 - 3;
        acc36 = sum64 + 4;
        val66 = val66 - 1;
        val66 = val66 + 1;
        cur66 = val66 - 8;
        val66 = acc36 + 41;
        sum64 = val66;
        }
    }
}
int main() { test_func(); return 0; }

