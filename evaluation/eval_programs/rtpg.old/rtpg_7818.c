// RTPG_7818: vars=9 stmts=4
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 27509;
}
int main() { test_func(10); return 0; }

