// RTPG_3304: vars=14 stmts=4
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + 21;
}
int main() { test_func(10); return 0; }

