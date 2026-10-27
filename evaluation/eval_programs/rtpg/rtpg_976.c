// RTPG_976: vars=3 stmts=10
int idx_arr[64];
void test_func(void) {
    int res87 = 25;
    int val64 = 82;
    int b78 = 9179;
    int i;
    for (i = 0; i < 100; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        b78 = val64 - res87;
        b78 = b78 + res87;
        b78 = b78 + 1;
        val64 = b78 + 6;
        res87 = res87 - 2;
        res87 = val64 + 7;
        b78 = res87 + val64;
        b78 = val64 + 27;
        b78 = val64;
        b78 = val64;
        }
    }
}
int main() { test_func(); return 0; }

