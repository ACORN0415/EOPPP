// RTPG_8407: vars=105 stmts=5
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 4;
}
int main() { test_func(10); return 0; }

