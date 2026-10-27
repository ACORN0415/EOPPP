// RTPG_5704: vars=45 stmts=6
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 44;
}
int main() { test_func(10); return 0; }

