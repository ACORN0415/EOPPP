// RTPG_4341: vars=7 stmts=2
void test_func(void) {
    int cur43 = 96;
    int out35 = 45;
    int tmp6 = 10;
    int prev17 = 1;
    int a59 = 13;
    int prev41 = 2;
    int x6 = 88;
    int *ptr = &prev41;
    int i;
    for (i = 0; i < 71; i++) {
        switch (tmp6) {
            case 0: x6 = 39; break;
            case 1: out35 = 69; break;
            default: break;
        }
        tmp6 = tmp6 + 1;
    }
}
int main() { test_func(); return 0; }

