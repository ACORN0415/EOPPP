// RTPG_689: vars=27 stmts=5
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 22232;
}
int main() { test_func(10); return 0; }

