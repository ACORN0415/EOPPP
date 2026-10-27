// RTPG_2495: vars=82 stmts=6
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 6;
}
int main() { test_func(10); return 0; }

