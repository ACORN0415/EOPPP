// RTPG_6170: vars=43 stmts=8
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 40164;
}
int main() { test_func(10); return 0; }

