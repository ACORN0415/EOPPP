// RTPG_5082: vars=139 stmts=11
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 15;
}
int main() { test_func(10); return 0; }

