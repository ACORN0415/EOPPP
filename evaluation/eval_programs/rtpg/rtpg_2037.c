// RTPG_2037: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int sum85 = -28;
    int dat82 = 28932;
    float val98 = 4.89;
    int a49 = 54;
    int i;
    for (i = 0; i < 36; i++) {
        switch (a49) {
            case 0: sum85 = 44; break;
            case 1: sum85 = 9; break;
            case 2: dat82 = 6323; break;
            case 3: dat82 = -31; break;
            default: break;
        }
        a49 = a49 + 1;
    }
}
int main() { test_func(); return 0; }

