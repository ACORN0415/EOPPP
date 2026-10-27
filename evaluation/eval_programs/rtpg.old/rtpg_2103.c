// RTPG_2103: vars=36 stmts=7
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 41844;
}
int main() { test_func(10); return 0; }

