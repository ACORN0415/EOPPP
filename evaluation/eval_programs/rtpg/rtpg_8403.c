// RTPG_8403: vars=9 stmts=7
enum State { FAST, ON, RED };
void test_func(void) {
    int tmp99 = 37;
    int v40 = 8;
    int b80 = 53;
    int val26 = 28;
    int res34 = 5;
    int acc40 = 0;
    int z74 = 30;
    int b30 = 0;
    int out68 = 46;
    enum State st = FAST;
    int i;
    for (i = 0; i < 23; i++) {
        switch (b80) {
            case 0: val26 = 56; break;
            case 1: val26 = 5; break;
            default: break;
        }
        b80 = b80 + 1;
    }
}
int main() { test_func(); return 0; }

