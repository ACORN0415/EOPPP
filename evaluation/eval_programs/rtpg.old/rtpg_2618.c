// RTPG_2618: vars=44 stmts=5
int test_func(int n) {
    if (n <= 1) return 1;
    return 3 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

