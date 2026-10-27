// RTPG_2270: vars=4 stmts=6
void test_func(void) {
    int res1 = 7;
    int out92 = 46;
    int val89 = -16;
    int v55 = 34;
    int i;
    for (i = 0; i < 24; i++) {
        switch (res1) {
            case 0: res1 = 3; break;
            case 1: v55 = -32; break;
            case 2: res1 = 92; break;
            case 3: res1 = 0; break;
            default: break;
        }
        res1 = res1 + 1;
    }
}
int main() { test_func(); return 0; }

