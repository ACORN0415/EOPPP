// RTPG_7426: vars=4 stmts=6
void test_func(void) {
    int b81 = 21;
    int v52 = 24957;
    int v60 = 31;
    int res4 = 0;
    int i;
    for (i = 0; i < 74; i++) {
        switch (v60) {
            case 0: res4 = 9; break;
            case 1: v52 = 3; break;
            case 2: res4 = 1; break;
            default: break;
        }
        v60 = v60 + 1;
    }
}
int main() { test_func(); return 0; }

