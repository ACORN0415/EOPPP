// RTPG_4844: vars=6 stmts=4
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 39;
}
int main() { test_func(10); return 0; }

