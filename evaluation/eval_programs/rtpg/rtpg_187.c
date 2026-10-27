// RTPG_187: vars=3 stmts=8
void test_func(void) {
    int prev42 = -5;
    int y12 = 58039;
    int val26 = 5;
    int *ptr = &prev42;
    int i;
    for (i = 0; i < 43; i++) {
        switch (y12) {
            case 0: prev42 = 6; break;
            case 1: prev42 = 1; break;
            case 2: y12 = 7; break;
            case 3: val26 = -49; break;
            default: break;
        }
        y12 = y12 + 1;
    }
}
int main() { test_func(); return 0; }

