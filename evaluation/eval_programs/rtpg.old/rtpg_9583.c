// RTPG_9583: vars=10 stmts=6
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + -28;
}
int main() { test_func(10); return 0; }

