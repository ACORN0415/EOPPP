// RTPG_7737: vars=3 stmts=4
int idx_arr[32];
void test_func(void) {
    int sum63 = 1;
    int sum86 = -38;
    int b36 = 50;
    int i;
    for (i = 0; i < 93; i++) {
        b36 = xn[idx_arr[i]];
        sum86 = b36 - sum63;
        sum63 = sum63 - b36;
        b36 = sum86 + 37;
        sum63 = sum63;
    }
}
int main() { test_func(); return 0; }

