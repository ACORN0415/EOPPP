// RTPG_8247: vars=4 stmts=4
void test_func(void) {
    int a96 = 96;
    int lo83 = -21;
    int res75 = 44538;
    int z35 = 68;
    int *ptr = &res75;
    int i;
    for (i = 0; i < 83; i++) {
        z35 = z35 + z35;
        z35 = z35 + 4;
        z35 = a96;
        lo83 = a96 & res75;
        *ptr = *ptr + 5;
        if (z35 != 78) {
        res75 = a96;
        }
    }
}
int main() { test_func(); return 0; }

