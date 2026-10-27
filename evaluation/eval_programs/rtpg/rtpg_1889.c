// RTPG_1889: vars=3 stmts=5
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 85;
}
int main() { test_func(10); return 0; }

