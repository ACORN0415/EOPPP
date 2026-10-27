// RTPG_6417: vars=3 stmts=6
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + 3;
}
int main() { test_func(10); return 0; }

