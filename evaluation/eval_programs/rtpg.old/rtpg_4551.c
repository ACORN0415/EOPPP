// RTPG_4551: vars=3 stmts=7
void test_func(void) {
    int res42 = 7;
    int b78 = 10;
    int out67 = 15;
    int i;
    for (i = 0; i < 98; i++) {
        res42 = res42 - b78;
        b78 = out67 - res42;
        res42 = res42 - out67;
        res42 = res42 + 5;
        b78 = b78 + 1;
        b78 = res42 - res42;
        b78 = res42 - 8;
        if (out67 == -9) {
        res42 = res42 - out67;
        }
    }
}
int main() { test_func(); return 0; }

