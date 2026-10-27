// RTPG_1344: vars=3 stmts=5
void test_func(void) {
    int z10 = -32;
    int z61 = 5;
    int prev30 = 88;
    int i;
    for (i = 0; i < 73; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        z10 = z10 - 1;
        z10 = z10;
        z10 = z61 - 5;
        z61 = z61 + prev30;
        z10 = z10 - 3629;
        }
    }
}
int main() { test_func(); return 0; }

