// RTPG_8866: vars=104 stmts=4
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 75;
}
int main() { test_func(10); return 0; }

