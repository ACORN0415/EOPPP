// RTPG_5358: vars=6 stmts=8
int idx_arr[64];
void test_func(void) {
    int hi68 = 57;
    int lo32 = 2;
    int tmp20 = 21055;
    int y62 = 16;
    int acc8 = 6;
    int z85 = 11;
    int i;
    for (i = 0; i < 9; i++) {
        acc8 = xn[idx_arr[i]];
        tmp20 = tmp20 - 2;
        lo32 = lo32 + 3;
        hi68 = tmp20;
        lo32 = hi68 - acc8;
        y62 = z85;
        tmp20 = z85 + y62;
        y62 = lo32 + 47082;
        tmp20 = hi68 - 48;
        if (lo32 >= -25) {
        hi68 = lo32 + z85;
        }
    }
}
int main() { test_func(); return 0; }

