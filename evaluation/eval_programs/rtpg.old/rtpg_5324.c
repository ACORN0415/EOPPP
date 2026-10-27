// RTPG_5324: vars=6 stmts=7
void test_func(void) {
    float v26 = 81.59;
    int tmp52 = 22;
    int b3 = 8;
    int dat52 = 52967;
    int cur61 = 3;
    int b58 = 4;
    int i;
    for (i = 0; i < 30; i++) {
        switch (tmp52) {
            case 0: tmp52 = 5; break;
            case 1: tmp52 = 7; break;
            case 2: dat52 = 44229; break;
            case 3: b58 = 9; break;
            default: break;
        }
        tmp52 = tmp52 + 1;
    }
}
int main() { test_func(); return 0; }

