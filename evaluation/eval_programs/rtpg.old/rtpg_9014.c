// RTPG_9014: vars=42 stmts=8
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 6533;
}
int main() { test_func(10); return 0; }

