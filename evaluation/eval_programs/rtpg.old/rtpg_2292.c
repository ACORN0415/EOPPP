// RTPG_2292: vars=16 stmts=7
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 24;
}
int main() { test_func(10); return 0; }

