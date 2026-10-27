// RTPG_9447: vars=39 stmts=7
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 9;
}
int main() { test_func(10); return 0; }

