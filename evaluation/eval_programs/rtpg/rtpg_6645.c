// RTPG_6645: vars=138 stmts=5
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 23558;
}
int main() { test_func(10); return 0; }

