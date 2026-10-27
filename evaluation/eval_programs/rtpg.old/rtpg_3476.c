// RTPG_3476: vars=49 stmts=4
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 47;
}
int main() { test_func(10); return 0; }

