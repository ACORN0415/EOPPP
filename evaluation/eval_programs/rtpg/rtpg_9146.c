// RTPG_9146: vars=5 stmts=7
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + 62864;
}
int main() { test_func(10); return 0; }

