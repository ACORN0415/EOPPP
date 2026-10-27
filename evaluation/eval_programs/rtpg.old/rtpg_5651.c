// RTPG_5651: vars=6 stmts=10
enum State { FAST, RED, BLUE };
void test_func(void) {
    int res52 = -37;
    int sum31 = -13;
    int hi7 = 37726;
    int val82 = -19;
    int out17 = 28;
    int hi49 = 1507;
    enum State st = FAST;
    int i;
    for (i = 0; i < 66; i++) {
        switch (sum31) {
            case 0: res52 = 4; break;
            case 1: res52 = 7; break;
            case 2: sum31 = -21; break;
            case 3: out17 = 8; break;
            default: break;
        }
        sum31 = sum31 + 1;
    }
}
int main() { test_func(); return 0; }

