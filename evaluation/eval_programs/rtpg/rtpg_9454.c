// RTPG_9454: vars=41 stmts=8
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + 96;
}
int main() { test_func(10); return 0; }

