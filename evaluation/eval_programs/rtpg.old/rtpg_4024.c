// RTPG_4024: vars=44 stmts=7
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + 21;
}
int main() { test_func(10); return 0; }

