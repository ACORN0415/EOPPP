// RTPG_6505: vars=31 stmts=3
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + 5;
}
int main() { test_func(10); return 0; }

