// RTPG_9086: vars=7 stmts=5
void test_func(void) {
    int res22 = 5442;
    int acc12 = 8;
    int cur82 = 64061;
    int x3 = 52579;
    int y3 = 63;
    int out14 = 32;
    int cur50 = 21307;
    int i;
    for (i = 0; i < 62; i++) {
        switch (cur50) {
            case 0: x3 = 4; break;
            case 1: out14 = 37; break;
            case 2: out14 = 3; break;
            case 3: x3 = 15020; break;
            default: break;
        }
        cur50 = cur50 + 1;
    }
}
int main() { test_func(); return 0; }

