// RTPG_2989: vars=137 stmts=2
int test_func(int k) {
    if (k <= 1) return 0;
    return test_func(k - 1) + 1;
}
int main() { test_func(10); return 0; }

