// RTPG_9896: vars=66 stmts=4
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

