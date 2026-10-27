// RTPG_5151: vars=7 stmts=4
int xn[64];
int yo[64];
enum State { BLUE, ON, RED };
void test_func(void) {
    int x85 = 5;
    int val4 = 8;
    int b93 = -24;
    int b91 = 25146;
    int hi96 = -31;
    int y32 = 21119;
    int tmp71 = 16032;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 64; i++) {
        val4 = xn[i];
        y32 = y32 + 4;
        b91 = x85 + 13;
        y32 = hi96 - b91;
        b91 = x85;
        yo[i] = b93;
    }
}
int main() { test_func(); return 0; }

