// RTPG_9862: vars=9 stmts=6
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 61;
}
int main() { test_func(10); return 0; }

