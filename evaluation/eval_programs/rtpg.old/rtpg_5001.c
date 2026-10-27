// RTPG_5001: vars=4 stmts=8
void test_func(void) {
    int tmp21 = 6;
    int val37 = 8;
    int hi85 = -32;
    int dat19 = 40;
    int i;
    for (i = 0; i < 53; i++) {
        val37 = dat19;
        dat19 = dat19 + 3;
        hi85 = dat19 + val37;
        hi85 = hi85 - 1;
        val37 = val37 + tmp21;
        val37 = dat19;
        tmp21 = val37;
        tmp21 = tmp21 - tmp21;
        if (hi85 < 80) {
        dat19 = dat19 + 3;
        }
    }
}
int main() { test_func(); return 0; }

