// RTPG_3832: vars=5 stmts=2
void test_func(void) {
    int b19 = 25337;
    int cur90 = 6;
    int val91 = 7;
    int dat24 = 5;
    int v24 = 47;
    int i;
    for (i = 0; i < 28; i++) {
        switch (val91) {
            case 0: cur90 = 9; break;
            case 1: b19 = 9; break;
            case 2: cur90 = 7; break;
            case 3: b19 = 14771; break;
            default: break;
        }
        val91 = val91 + 1;
    }
}
int main() { test_func(); return 0; }

