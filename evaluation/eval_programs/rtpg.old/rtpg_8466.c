// RTPG_8466: vars=35 stmts=5
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + -17;
}
int main() { test_func(10); return 0; }

