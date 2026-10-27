// RTPG_11: vars=3 stmts=3
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + 19;
}
int main() { test_func(10); return 0; }

