// RTPG_4531: vars=17 stmts=4
int test_func(int k) {
    if (k <= 1) return 0;
    return test_func(k - 1) + 7636;
}
int main() { test_func(10); return 0; }

