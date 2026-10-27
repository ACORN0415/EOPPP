// RTPG_2629: vars=60 stmts=4
int test_func(int x) {
    if (x <= 1) return 0;
    return 3 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

