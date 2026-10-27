// RTPG_2436: vars=3 stmts=7
void test_func(void) {
    int y57 = 68;
    int y88 = 9;
    int tmp92 = 21714;
    int i;
    for (i = 0; i < 47; i++) {
        switch (y57) {
            case 0: y57 = 12; break;
            case 1: tmp92 = 2; break;
            case 2: y57 = 9; break;
            case 3: y57 = 46430; break;
            default: break;
        }
        y57 = y57 + 1;
    }
}
int main() { test_func(); return 0; }

