// RTPG_7823: vars=137 stmts=5
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

