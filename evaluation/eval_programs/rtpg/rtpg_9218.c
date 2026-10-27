// RTPG_9218: vars=10 stmts=3
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

