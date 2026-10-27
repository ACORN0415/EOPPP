// RTPG_3537: vars=5 stmts=4
void test_func(void) {
    double sum24 = 69.09;
    int val95 = 17741;
    double v88 = 14.60;
    int sum7 = 39941;
    int prev84 = 9;
    int i;
    for (i = 0; i < 61; i++) {
        sum7 = prev84;
        prev84 = prev84 + 3;
        val95 = val95 - 1;
        sum24 = val95 + 70;
    }
}
int main() { test_func(); return 0; }

