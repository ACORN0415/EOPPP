// RTPG_8953: vars=4 stmts=2
int idx_arr[16];
void test_func(void) {
    int val82 = 8;
    int val65 = 28042;
    int cur96 = 11981;
    int v97 = 4;
    int i;
    for (i = 0; i < 47; i++) {
        val82 = xn[idx_arr[i]];
        val82 = val82 - 1;
        val65 = val65 + 2;
        if (val82 <= -11) {
        val82 = v97 + val82;
        }
    }
}
int main() { test_func(); return 0; }

