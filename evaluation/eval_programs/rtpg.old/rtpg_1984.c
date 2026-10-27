// RTPG_1984: vars=5 stmts=10
void test_func(void) {
    int res16 = -18;
    int x77 = 1;
    int y22 = 4;
    int x86 = 33261;
    int val68 = 5;
    int i;
    for (i = 0; i < 65; i++) {
        switch (x77) {
            case 0: x86 = 42; break;
            case 1: val68 = 4; break;
            case 2: val68 = 2; break;
            default: break;
        }
        x77 = x77 + 1;
    }
}
int main() { test_func(); return 0; }

