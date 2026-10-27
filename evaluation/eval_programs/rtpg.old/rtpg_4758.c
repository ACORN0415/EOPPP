// RTPG_4758: vars=37 stmts=2
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 21519;
}
int main() { test_func(10); return 0; }

