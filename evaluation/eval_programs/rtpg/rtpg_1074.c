// RTPG_1074: vars=3 stmts=8
void test_func(void) {
    int prev25 = -43;
    int v33 = 32;
    int tmp84 = 3369;
    int i;
    for (i = 0; i < 83; i++) {
        switch (v33) {
            case 0: tmp84 = -16; break;
            case 1: prev25 = 65; break;
            case 2: prev25 = 64675; break;
            default: break;
        }
        v33 = v33 + 1;
    }
}
int main() { test_func(); return 0; }

