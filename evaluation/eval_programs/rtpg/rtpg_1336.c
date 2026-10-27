// RTPG_1336: vars=3 stmts=5
void test_func(void) {
    int z61 = -32;
    int prev30 = 5;
    int z10 = 88;
    int i;
    for (i = 0; i < 73; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        z61 = z61 - 1;
        z61 = z61;
        z61 = prev30 - 5;
        prev30 = prev30 + z10;
        z61 = z61 - 3629;
        }
    }
}
int main() { test_func(); return 0; }

