// RTPG_5583: vars=4 stmts=6
void test_func(void) {
    int tmp86 = 6;
    int acc25 = 88;
    int sum27 = 38;
    int cnt53 = 3;
    int i;
    for (i = 0; i < 67; i++) {
        switch (tmp86) {
            case 0: cnt53 = 50; break;
            case 1: acc25 = 9; break;
            case 2: tmp86 = 2; break;
            case 3: sum27 = 8; break;
            default: break;
        }
        tmp86 = tmp86 + 1;
    }
}
int main() { test_func(); return 0; }

