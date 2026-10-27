// RTPG_4649: vars=5 stmts=5
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 50;
}
int main() { test_func(10); return 0; }

