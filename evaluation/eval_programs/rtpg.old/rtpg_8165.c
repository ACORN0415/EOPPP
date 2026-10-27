// RTPG_8165: vars=5 stmts=2
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 10;
}
int main() { test_func(10); return 0; }

