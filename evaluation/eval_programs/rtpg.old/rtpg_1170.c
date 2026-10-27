// RTPG_1170: vars=3 stmts=4
void test_func(void) {
    int hi32 = 50821;
    int res64 = -1;
    int acc41 = 9;
    int i;
    for (i = 0; i < 74; i++) {
        acc41 = res64 - acc41;
        acc41 = res64 + acc41;
        res64 = acc41 + acc41;
        hi32 = acc41;
    }
}
int main() { test_func(); return 0; }

