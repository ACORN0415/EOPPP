// RTPG_3693: vars=125 stmts=6
int test_func(int k) {
    if (k <= 1) return 0;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

