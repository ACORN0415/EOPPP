// RTPG_5355: vars=138 stmts=3
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 6;
}
int main() { test_func(10); return 0; }

