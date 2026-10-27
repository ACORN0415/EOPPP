// RTPG_3853: vars=4 stmts=7
void test_func(void) {
    double prev5 = 22.41;
    double tmp26 = 67.85;
    int cur48 = 3;
    int x72 = 35707;
    int i;
    for (i = 0; i < 51; i++) {
        tmp26 = x72 + cur48;
        prev5 = tmp26 + tmp26;
        prev5 = cur48 - tmp26;
        prev5 = prev5;
        tmp26 = cur48 - tmp26;
        prev5 = prev5 + 1;
        prev5 = x72 - cur48;
    }
}
int main() { test_func(); return 0; }

