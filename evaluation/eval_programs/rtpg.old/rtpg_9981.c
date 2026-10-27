// RTPG_9981: vars=134 stmts=5
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 2;
}
int main() { test_func(10); return 0; }

