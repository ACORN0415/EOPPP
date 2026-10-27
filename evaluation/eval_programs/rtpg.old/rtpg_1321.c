// RTPG_1321: vars=7 stmts=4
void test_func(void) {
    int dat77 = 7;
    int v75 = 5;
    int z9 = 3;
    int x81 = 42722;
    int a74 = -32;
    int res94 = 8;
    int res57 = 580;
    int i;
    for (i = 0; i < 95; i++) {
        switch (x81) {
            case 0: dat77 = 7; break;
            case 1: dat77 = -13; break;
            case 2: res94 = 44576; break;
            case 3: a74 = 1; break;
            default: break;
        }
        x81 = x81 + 1;
    }
}
int main() { test_func(); return 0; }

