// RTPG_5104: vars=4 stmts=4
int idx_arr[16];
void test_func(void) {
    int y60 = 6;
    int b62 = 9446;
    int a42 = 10;
    int lo81 = 17;
    int i;
    for (i = 0; i < 97; i++) {
        y60 = xn[idx_arr[i]];
        y60 = lo81;
        b62 = b62 - 2;
        b62 = b62 + 1;
        y60 = b62 - 51;
    }
}
int main() { test_func(); return 0; }

