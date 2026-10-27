// RTPG_4457: vars=5 stmts=5
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 5;
}
int main() { test_func(10); return 0; }

