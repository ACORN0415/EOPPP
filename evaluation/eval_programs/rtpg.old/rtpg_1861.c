// RTPG_1861: vars=3 stmts=4
void test_func(void) {
    int b61 = -31;
    int x85 = 4;
    int y21 = 53;
    int i;
    for (i = 0; i < 60; i++) {
        b61 = x85 - 12;
        x85 = b61 ^ x85;
        b61 = b61 | x85;
        y21 = y21 - 2;
    }
}
int main() { test_func(); return 0; }

