// RTPG_5565: vars=3 stmts=7
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + 45394;
}
int main() { test_func(10); return 0; }

