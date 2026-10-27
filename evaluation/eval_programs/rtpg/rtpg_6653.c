// RTPG_6653: vars=5 stmts=12
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 37;
}
int main() { test_func(10); return 0; }

