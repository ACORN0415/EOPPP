// RTPG_536: vars=9 stmts=3
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 32;
}
int main() { test_func(10); return 0; }

