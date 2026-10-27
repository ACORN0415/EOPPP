// RTPG_8691: vars=3 stmts=6
void test_func(void) {
    int z80 = -25;
    int sum51 = 697;
    int res53 = 23;
    int i;
    for (i = 0; i < 57; i++) {
        sum51 = sum51 - z80;
        sum51 = res53;
        z80 = sum51 + res53;
        res53 = res53 + z80;
        res53 = z80 - 27;
        z80 = z80 + z80;
    }
}
int main() { test_func(); return 0; }

