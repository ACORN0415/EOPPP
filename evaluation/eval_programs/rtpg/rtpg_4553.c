// RTPG_4553: vars=3 stmts=5
int idx_arr[16];
void test_func(void) {
    int y12 = 9;
    int prev39 = 13;
    int val87 = 30967;
    int i;
    for (i = 0; i < 30; i++) {
        switch (y12) {
            case 0: y12 = -49; break;
            case 1: prev39 = 77; break;
            case 2: prev39 = 6; break;
            default: break;
        }
        y12 = y12 + 1;
    }
}
int main() { test_func(); return 0; }

