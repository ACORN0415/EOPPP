// RTPG_2402: vars=6 stmts=5
int idx_arr[32];
enum State { FAST, OFF, SLOW };
void test_func(void) {
    int val9 = 42;
    int a6 = 6701;
    int dat42 = 53689;
    int a28 = 40;
    int lo16 = 4;
    int b44 = 40;
    enum State st = FAST;
    int i;
    for (i = 0; i < 92; i++) {
        dat42 = xn[idx_arr[i]];
        a28 = dat42 - 50;
        a6 = lo16 ^ val9;
        a28 = lo16 & b44;
        a28 = dat42 - 9;
        b44 = b44 | b44;
        if (a28 >= 80) {
        b44 = b44 + 3;
        }
    }
}
int main() { test_func(); return 0; }

