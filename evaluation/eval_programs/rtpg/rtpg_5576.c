// RTPG_5576: vars=6 stmts=4
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 9;
}
int main() { test_func(10); return 0; }

