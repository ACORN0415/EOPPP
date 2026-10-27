// RTPG_5216: vars=49 stmts=10
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

