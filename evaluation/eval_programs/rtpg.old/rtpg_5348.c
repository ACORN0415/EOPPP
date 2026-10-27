// RTPG_5348: vars=5 stmts=5
void test_func(void) {
    int hi6 = 55255;
    int sum62 = 47;
    int c36 = 22836;
    int acc9 = -49;
    int res21 = 39;
    int i;
    for (i = 0; i < 23; i++) {
        acc9 = hi6 - c36;
        res21 = res21 & acc9;
        hi6 = hi6 + 4;
        acc9 = hi6 + 21;
        c36 = hi6 % sum62;
    }
}
int main() { test_func(); return 0; }

