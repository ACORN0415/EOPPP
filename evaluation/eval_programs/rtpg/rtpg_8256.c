// RTPG_8256: vars=10 stmts=6
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 11727;
}
int main() { test_func(10); return 0; }

