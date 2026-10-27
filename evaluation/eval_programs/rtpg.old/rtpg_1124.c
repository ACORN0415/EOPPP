// RTPG_1124: vars=3 stmts=4
int idx_arr[64];
void test_func(void) {
    int lo67 = 4;
    int a86 = 40519;
    float z90 = 45.40;
    int i;
    for (i = 0; i < 47; i++) {
        z90 = xn[idx_arr[i]];
        z90 = z90 + lo67;
        z90 = lo67 - 43;
        lo67 = a86 - z90;
        z90 = a86 + 12793;
        if (z90 != 44) {
        lo67 = a86;
        }
    }
}
int main() { test_func(); return 0; }

