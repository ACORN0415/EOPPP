// RTPG_389: vars=6 stmts=2
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 63;
}
int main() { test_func(10); return 0; }

