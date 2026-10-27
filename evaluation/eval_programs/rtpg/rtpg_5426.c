// RTPG_5426: vars=99 stmts=12
int test_func(int k) {
    if (k <= 0) return 1;
    return 5 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

