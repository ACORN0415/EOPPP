// RTPG_9903: vars=7 stmts=7
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 28761;
}
int main() { test_func(10); return 0; }

