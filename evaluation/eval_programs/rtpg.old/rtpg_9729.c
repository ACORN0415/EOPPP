// RTPG_9729: vars=9 stmts=6
void test_func(void) {
    int cnt84 = 3213;
    int val61 = 6;
    int v85 = 8;
    int c24 = 2;
    int prev71 = 13;
    int a73 = 67;
    int prev4 = 85;
    int cur10 = 0;
    int lo8 = 40650;
    int *ptr = &lo8;
    int i;
    for (i = 0; i < 5; i++) {
        switch (val61) {
            case 0: a73 = 82; break;
            case 1: lo8 = -15; break;
            case 2: cnt84 = 31; break;
            default: break;
        }
        val61 = val61 + 1;
    }
}
int main() { test_func(); return 0; }

