// RTPG_1597: vars=131 stmts=5
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 46196;
}
int main() { test_func(10); return 0; }

