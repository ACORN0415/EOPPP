// RTPG_5422: vars=3 stmts=4
int idx_arr[64];
void test_func(void) {
    int res15 = 48;
    int res68 = 1478;
    int v95 = 38882;
    int *ptr = &res68;
    int i;
    for (i = 0; i < 28; i++) {
        res68 = xn[idx_arr[i]];
        v95 = v95 | res15;
        res68 = res15 - res68;
        v95 = res68 - 5447;
        v95 = res68 - v95;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

