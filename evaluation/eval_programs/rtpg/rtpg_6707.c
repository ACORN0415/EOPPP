// RTPG_6707: vars=66 stmts=5
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 24616;
}
int main() { test_func(10); return 0; }

