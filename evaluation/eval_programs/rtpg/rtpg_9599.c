// RTPG_9599: vars=51 stmts=10
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 47;
}
int main() { test_func(10); return 0; }

