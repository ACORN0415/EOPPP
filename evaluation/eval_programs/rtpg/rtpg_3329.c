// RTPG_3329: vars=4 stmts=4
void test_func(void) {
    int cur67 = -40;
    int b3 = 4;
    int dat67 = 19746;
    int cnt4 = 19402;
    int i;
    for (i = 0; i < 88; i++) {
        switch (dat67) {
            case 0: dat67 = 33; break;
            case 1: cnt4 = 94; break;
            case 2: dat67 = 10; break;
            case 3: b3 = 5; break;
            default: break;
        }
        dat67 = dat67 + 1;
    }
}
int main() { test_func(); return 0; }

