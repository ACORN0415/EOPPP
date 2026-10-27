// RTPG_750: vars=32 stmts=10
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 49;
}
int main() { test_func(10); return 0; }

