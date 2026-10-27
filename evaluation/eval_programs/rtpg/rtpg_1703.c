// RTPG_1703: vars=6 stmts=3
void test_func(void) {
    int lo7 = 7;
    int v96 = 9;
    int tmp4 = 3;
    int a11 = 884;
    int acc62 = 25194;
    int sum95 = 2;
    int i;
    for (i = 0; i < 35; i++) {
        switch (tmp4) {
            case 0: a11 = 1; break;
            case 1: a11 = 6578; break;
            case 2: acc62 = 13; break;
            default: break;
        }
        tmp4 = tmp4 + 1;
    }
}
int main() { test_func(); return 0; }

