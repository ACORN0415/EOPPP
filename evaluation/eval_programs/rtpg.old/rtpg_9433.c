// RTPG_9433: vars=8 stmts=7
int idx_arr[64];
enum State { SLOW, BLUE, FAST };
void test_func(void) {
    int prev34 = 3;
    int x67 = 9;
    int x62 = 6;
    int cur29 = 31769;
    int a2 = 1;
    int a7 = 34;
    int dat48 = 21;
    int b44 = 63435;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 42; i++) {
        x62 = xn[idx_arr[i]];
        b44 = cur29 / x62;
        a2 = dat48 - cur29;
        a2 = b44 ^ a2;
        b44 = x67 | dat48;
        x67 = a2;
        cur29 = prev34 ^ a7;
        prev34 = prev34 - 1;
    }
done:
    x67 = 0;
}
int main() { test_func(); return 0; }

