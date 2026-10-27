// RTPG_6711: vars=55 stmts=5
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + -44;
}
int main() { test_func(10); return 0; }

