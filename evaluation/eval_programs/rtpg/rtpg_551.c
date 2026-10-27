// RTPG_551: vars=82 stmts=7
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 60427;
}
int main() { test_func(10); return 0; }

