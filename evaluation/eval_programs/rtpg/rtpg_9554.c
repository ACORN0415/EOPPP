// RTPG_9554: vars=4 stmts=6
int idx_arr[64];
void test_func(void) {
    int acc43 = 83;
    int prev88 = 41;
    int prev68 = 25675;
    int b45 = 29055;
    int *ptr = &acc43;
    int i;
    for (i = 0; i < 97; i++) {
        prev88 = xn[idx_arr[i]];
        prev68 = acc43 - 3;
        prev68 = prev68 - b45;
        prev68 = prev68 - b45;
        prev88 = prev88 + 2;
        acc43 = acc43 + 3;
        b45 = acc43;
        *ptr = *ptr + 5;
        if (acc43 < -4) {
        b45 = b45;
        }
    }
}
int main() { test_func(); return 0; }

