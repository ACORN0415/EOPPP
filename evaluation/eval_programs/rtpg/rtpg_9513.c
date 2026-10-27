// RTPG_9513: vars=6 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int v40 = 7235;
    int b10 = 18;
    int cnt23 = 96;
    int out21 = 31;
    int prev65 = -30;
    int lo16 = 55;
    int *ptr = &cnt23;
    int i;
    for (i = 0; i < 20; i++) {
        switch (v40) {
            case 0: cnt23 = 9; break;
            case 1: v40 = 34; break;
            default: break;
        }
        v40 = v40 + 1;
    }
}
int main() { test_func(); return 0; }

