// RTPG_3374: vars=38 stmts=5
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 1;
}
int main() { test_func(10); return 0; }

