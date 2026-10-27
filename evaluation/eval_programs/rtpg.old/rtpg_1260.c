// RTPG_1260: vars=6 stmts=3
void test_func(void) {
    int cnt74 = 30;
    int out26 = 45;
    int dat73 = 88;
    int lo80 = 9;
    int lo19 = 25098;
    int res39 = 30;
    int *ptr = &cnt74;
    int i;
    for (i = 0; i < 52; i++) {
        switch (dat73) {
            case 0: out26 = 5; break;
            case 1: out26 = 2; break;
            case 2: lo80 = -10; break;
            default: break;
        }
        dat73 = dat73 + 1;
    }
}
int main() { test_func(); return 0; }

