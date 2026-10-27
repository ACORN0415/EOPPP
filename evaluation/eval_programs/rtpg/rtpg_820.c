// RTPG_820: vars=5 stmts=3
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 57;
}
int main() { test_func(10); return 0; }

