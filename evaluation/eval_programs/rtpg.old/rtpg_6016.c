// RTPG_6016: vars=3 stmts=2
int idx_arr[16];
void test_func(void) {
    int c98 = 2287;
    int lo48 = 26;
    int y4 = 50697;
    int i;
    for (i = 0; i < 10; i++) {
        lo48 = xn[idx_arr[i]];
        c98 = c98 - lo48;
        lo48 = c98 + y4;
    }
}
int main() { test_func(); return 0; }

