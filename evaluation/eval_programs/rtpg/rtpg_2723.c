// RTPG_2723: vars=3 stmts=6
void test_func(void) {
    int acc17 = 87;
    int dat82 = -16;
    int sum94 = 24664;
    int i;
    for (i = 0; i < 5; i++) {
        dat82 = acc17 + sum94;
        acc17 = acc17 + 2;
        acc17 = dat82 + 21;
        dat82 = sum94;
        acc17 = sum94;
        acc17 = acc17 - 4;
    }
}
int main() { test_func(); return 0; }

