// RTPG_4979: vars=49 stmts=2
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 42;
}
int main() { test_func(10); return 0; }

