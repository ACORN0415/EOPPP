// RTPG_3319: vars=4 stmts=4
void test_func(void) {
    int cur67 = -40;
    int dat67 = 4;
    int cnt4 = 19746;
    int b3 = 19402;
    int i;
    for (i = 0; i < 88; i++) {
        switch (cnt4) {
            case 0: cnt4 = 33; break;
            case 1: b3 = 94; break;
            case 2: cnt4 = 10; break;
            case 3: dat67 = 5; break;
            default: break;
        }
        cnt4 = cnt4 + 1;
    }
}
int main() { test_func(); return 0; }

