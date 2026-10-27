// RTPG_2278: vars=5 stmts=4
void test_func(void) {
    int hi33 = 2;
    int b21 = -12;
    int b77 = 73;
    int v56 = 10;
    int out19 = 20;
    int i;
    for (i = 0; i < 41; i++) {
        b77 = b77 + 5;
        hi33 = hi33 - 5;
        v56 = hi33 + out19;
        v56 = v56;
    }
}
int main() { test_func(); return 0; }

