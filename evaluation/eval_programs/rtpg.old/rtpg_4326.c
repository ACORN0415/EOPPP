// RTPG_4326: vars=119 stmts=10
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 9;
}
int main() { test_func(10); return 0; }

