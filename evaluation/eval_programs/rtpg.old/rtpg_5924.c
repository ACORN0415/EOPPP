// RTPG_5924: vars=4 stmts=3
void test_func(void) {
    int res11 = 38;
    int b60 = 60;
    int tmp33 = 95;
    int dat90 = -29;
    int i;
    for (i = 0; i < 77; i++) {
        res11 = b60 + tmp33;
        b60 = tmp33;
        tmp33 = tmp33 - 2;
    }
}
int main() { test_func(); return 0; }

