// RTPG_4128: vars=3 stmts=4
enum State { BLUE, RED, SLOW };
void test_func(void) {
    int val43 = 33773;
    int z16 = 34689;
    int val39 = 5;
    enum State st = BLUE;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 94;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        val43 = val43 - z16;
        z16 = z16;
        z16 = z16 + val43;
        val39 = val43;
        if (val43 <= 7) {
        val39 = z16;
        }
    }
}
int main() { test_func(); return 0; }

