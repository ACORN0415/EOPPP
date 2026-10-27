// RTPG_7673: vars=10 stmts=3
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 6415;
}
int main() { test_func(10); return 0; }

