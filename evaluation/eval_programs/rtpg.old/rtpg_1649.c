// RTPG_1649: vars=120 stmts=6
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 28331;
}
int main() { test_func(10); return 0; }

