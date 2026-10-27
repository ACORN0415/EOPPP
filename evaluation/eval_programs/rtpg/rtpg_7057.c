// RTPG_7057: vars=4 stmts=2
int idx_arr[32];
void test_func(void) {
    int val66 = 0;
    int res79 = 8;
    int y75 = 27;
    int c98 = 2;
    int i;
    for (i = 0; i < 77; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        val66 = y75 + c98;
        c98 = c98 - 5;
        }
    }
}
int main() { test_func(); return 0; }

