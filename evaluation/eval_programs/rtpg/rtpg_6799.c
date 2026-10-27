// RTPG_6799: vars=3 stmts=6
void test_func(void) {
    float y11 = 48.51;
    int hi79 = 47701;
    float b18 = 67.88;
    int i;
    for (i = 0; i < 94; i++) {
        y11 = b18 - y11;
        hi79 = hi79 - 1;
        hi79 = b18 ^ hi79;
        b18 = hi79 - 96;
        b18 = hi79 / y11;
        y11 = b18;
    }
}
int main() { test_func(); return 0; }

