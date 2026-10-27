// RTPG_5139: vars=13 stmts=5
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 44800;
}
int main() { test_func(10); return 0; }

