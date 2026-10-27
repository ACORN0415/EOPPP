// RTPG_1246: vars=6 stmts=3
void test_func(void) {
    int lo80 = 30;
    int cnt74 = 45;
    int out26 = 88;
    int res39 = 9;
    int lo19 = 25098;
    int dat73 = 30;
    int *ptr = &lo80;
    int i;
    for (i = 0; i < 52; i++) {
        switch (out26) {
            case 0: cnt74 = 5; break;
            case 1: cnt74 = 2; break;
            case 2: res39 = -10; break;
            default: break;
        }
        out26 = out26 + 1;
    }
}
int main() { test_func(); return 0; }

