// RTPG_4994: vars=123 stmts=12
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

