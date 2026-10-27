// RTPG_4495: vars=42 stmts=3
int test_func(int x) {
    if (x <= 0) return 0;
    return 5 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

