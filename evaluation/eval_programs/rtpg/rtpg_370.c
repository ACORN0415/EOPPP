// RTPG_370: vars=7 stmts=10
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 43743;
}
int main() { test_func(10); return 0; }

