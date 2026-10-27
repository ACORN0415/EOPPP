// RTPG_7524: vars=4 stmts=7
void test_func(void) {
    int prev69 = 5;
    int prev83 = 46;
    int c27 = 8;
    int b19 = 37;
    int *ptr = &b19;
    int i;
    for (i = 0; i < 31; i++) {
        switch (prev69) {
            case 0: c27 = 44369; break;
            case 1: b19 = 46830; break;
            case 2: prev83 = 9; break;
            case 3: b19 = 9; break;
            default: break;
        }
        prev69 = prev69 + 1;
    }
}
int main() { test_func(); return 0; }

