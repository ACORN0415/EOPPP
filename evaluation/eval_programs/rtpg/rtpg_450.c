// RTPG_450: vars=4 stmts=2
void test_func(void) {
    int cnt42 = 9;
    int out75 = 2889;
    int lo75 = 43712;
    int dat4 = 15780;
    int i;
    for (i = 0; i < 47; i++) {
        switch (dat4) {
            case 0: dat4 = 6439; break;
            case 1: dat4 = 7; break;
            default: break;
        }
        dat4 = dat4 + 1;
    }
}
int main() { test_func(); return 0; }

