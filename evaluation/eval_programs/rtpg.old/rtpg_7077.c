// RTPG_7077: vars=4 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int val1 = 8;
    int res63 = 39096;
    int tmp13 = 29;
    int hi82 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        res63 = xn[i];
        hi82 = val1 + hi82;
        val1 = val1 - 5;
        hi82 = hi82 - 3;
        hi82 = hi82 + val1;
        hi82 = hi82;
        val1 = res63 + tmp13;
        res63 = res63 + 3;
        tmp13 = tmp13;
        hi82 = tmp13 + val1;
        val1 = res63 - val1;
        hi82 = hi82 + tmp13;
        yo[i] = val1;
    }
}
int main() { test_func(); return 0; }

