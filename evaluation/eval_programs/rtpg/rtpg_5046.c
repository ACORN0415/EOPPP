// RTPG_5046: vars=3 stmts=10
void test_func(void) {
    int val30 = 50482;
    double b63 = 83.03;
    int lo54 = 52;
    int *ptr = &val30;
    int i;
    for (i = 0; i < 47; i++) {
        val30 = val30 + 14703;
        val30 = lo54 - val30;
        val30 = val30 - 2;
        b63 = b63 - val30;
        b63 = val30 - 29;
        val30 = val30 - b63;
        b63 = val30 + 15;
        b63 = b63 + 7;
        lo54 = b63 + 34;
        lo54 = lo54 - 1;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

