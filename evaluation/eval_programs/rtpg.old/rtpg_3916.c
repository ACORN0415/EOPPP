// RTPG_3916: vars=3 stmts=4
void test_func(void) {
    int lo45 = 2;
    int b66 = 51;
    int out48 = 48;
    int *ptr = &out48;
    int i;
    for (i = 0; i < 47; i++) {
        b66 = b66 + 41;
        lo45 = out48 - 8;
        b66 = lo45 - out48;
        b66 = out48 + b66;
        *ptr = *ptr + 2;
        if (lo45 < -21) {
        out48 = out48 - 17;
        }
    }
}
int main() { test_func(); return 0; }

