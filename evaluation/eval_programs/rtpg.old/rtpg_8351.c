// RTPG_8351: vars=10 stmts=9
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 23878;
}
int main() { test_func(10); return 0; }

