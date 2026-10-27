// RTPG_7449: vars=6 stmts=4
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 43338;
}
int main() { test_func(10); return 0; }

