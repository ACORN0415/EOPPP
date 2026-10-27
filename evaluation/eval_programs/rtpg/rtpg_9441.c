// RTPG_9441: vars=4 stmts=6
void test_func(void) {
    int res99 = 3;
    int val89 = 31631;
    int a98 = 2734;
    int cnt71 = -48;
    int h0 = 55;
    int sv0 = 0;
    int h1 = -9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 30; i++) {
        switch (val89) {
            case 0: cnt71 = 7; break;
            case 1: cnt71 = -43; break;
            case 2: cnt71 = 9; break;
            default: break;
        }
        val89 = val89 + 1;
    }
}
int main() { test_func(); return 0; }

