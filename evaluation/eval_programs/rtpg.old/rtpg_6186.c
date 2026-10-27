// RTPG_6186: vars=79 stmts=3
int test_func(int k) {
    if (k <= 0) return 1;
    return 4 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

