// RTPG_6719: vars=3 stmts=6
void test_func(void) {
    float y11 = 48.51;
    int hi79 = 47701;
    float b18 = 67.88;
    int i;
    for (i = 0; i < 94; i++) {
        y11 = b18 - y11;
        hi79 = hi79 - 1;
        b18 = b18 ^ b18;
        hi79 = hi79;
        y11 = y11 | hi79;
        b18 = b18 - 3;
    }
}
int main() { test_func(); return 0; }

