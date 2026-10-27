// RTPG_920: vars=4 stmts=10
void test_func(void) {
    int sum2 = 4;
    int val44 = 43319;
    int out96 = 7;
    int tmp38 = 9;
    int i;
    for (i = 0; i < 8; i++) {
        sum2 = sum2 + tmp38;
        tmp38 = tmp38;
        sum2 = val44 & tmp38;
        tmp38 = sum2 & out96;
        val44 = out96 / tmp38;
        val44 = tmp38 + sum2;
        tmp38 = sum2;
        out96 = val44 % sum2;
        val44 = sum2 & val44;
        tmp38 = sum2 - out96;
        if (tmp38 < 53) {
        out96 = tmp38 + val44;
        }
    }
}
int main() { test_func(); return 0; }

