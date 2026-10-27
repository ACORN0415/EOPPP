// RTPG_4177: vars=26 stmts=5
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + -24;
}
int main() { test_func(10); return 0; }

