// RTPG_3917: vars=5 stmts=5
void test_func(void) {
    int v25 = 95;
    int dat45 = 70;
    int out63 = 16;
    int res66 = -47;
    int a53 = 39;
    int i;
    for (i = 0; i < 11; i++) {
        switch (out63) {
            case 0: res66 = 9; break;
            case 1: out63 = 10; break;
            case 2: v25 = 77; break;
            case 3: out63 = -22; break;
            default: break;
        }
        out63 = out63 + 1;
    }
}
int main() { test_func(); return 0; }

