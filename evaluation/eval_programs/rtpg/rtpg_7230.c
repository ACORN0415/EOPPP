// RTPG_7230: vars=10 stmts=5
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 10;
}
int main() { test_func(10); return 0; }

