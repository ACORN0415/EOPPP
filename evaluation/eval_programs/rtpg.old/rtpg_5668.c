// RTPG_5668: vars=7 stmts=6
void test_func(void) {
    int a70 = 40;
    int a88 = 18;
    int out56 = 35;
    int sum51 = -17;
    int c8 = 6;
    int a84 = 4027;
    int val85 = 34530;
    int *ptr = &val85;
    int i;
    for (i = 0; i < 21; i++) {
        switch (a70) {
            case 0: a70 = 47880; break;
            case 1: c8 = 29128; break;
            default: break;
        }
        a70 = a70 + 1;
    }
}
int main() { test_func(); return 0; }

