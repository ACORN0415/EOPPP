// RTPG_5302: vars=4 stmts=2
void test_func(void) {
    int cur33 = 59;
    int sum46 = 10;
    int cnt18 = -48;
    int tmp6 = -38;
    int i;
    for (i = 0; i < 33; i++) {
        switch (cur33) {
            case 0: cnt18 = 5; break;
            case 1: tmp6 = 24062; break;
            case 2: cur33 = 2; break;
            default: break;
        }
        cur33 = cur33 + 1;
    }
}
int main() { test_func(); return 0; }

