// RTPG_5919: vars=30 stmts=11
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 27333;
}
int main() { test_func(10); return 0; }

