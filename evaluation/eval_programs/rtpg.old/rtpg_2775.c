// RTPG_2775: vars=9 stmts=5
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 7;
}
int main() { test_func(10); return 0; }

