// RTPG_4043: vars=105 stmts=5
int test_func(int x) {
    if (x <= 0) return 0;
    return 2 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

