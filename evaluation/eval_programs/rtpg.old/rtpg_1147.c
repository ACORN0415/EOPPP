// RTPG_1147: vars=6 stmts=4
void test_func(void) {
    float val63 = 93.13;
    int out58 = 70;
    int val33 = -27;
    int z96 = 56;
    int dat11 = 214;
    int a39 = -8;
    int i;
    for (i = 0; i < 32; i++) {
        a39 = a39 + 3;
        out58 = val33 ^ val63;
        out58 = out58 + z96;
        val63 = dat11 & z96;
        if (val63 > 62) {
        a39 = z96 + val33;
        }
    }
}
int main() { test_func(); return 0; }

