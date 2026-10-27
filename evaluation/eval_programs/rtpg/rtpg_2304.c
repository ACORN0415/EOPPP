// RTPG_2304: vars=13 stmts=4
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 6530;
}
int main() { test_func(10); return 0; }

