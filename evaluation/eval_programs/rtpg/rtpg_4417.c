// RTPG_4417: vars=27 stmts=12
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + 4;
}
int main() { test_func(10); return 0; }

