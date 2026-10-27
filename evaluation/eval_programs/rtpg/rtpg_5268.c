// RTPG_5268: vars=10 stmts=8
enum State { FAST, GREEN, BLUE };
void test_func(void) {
    int prev94 = 68;
    int dat64 = 33;
    int cnt51 = 31560;
    int prev41 = 42;
    int prev15 = 70;
    int dat82 = 24186;
    int c84 = 10;
    int prev6 = 3;
    int v50 = 48;
    int res24 = 26;
    enum State st = FAST;
    int i;
    for (i = 0; i < 24; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        prev94 = res24;
        dat82 = dat64 - prev41;
        cnt51 = cnt51 + 5;
        dat64 = dat64 - 4;
        prev94 = prev15 - 8;
        prev94 = prev94 + 1;
        dat82 = prev94 + res24;
        cnt51 = cnt51 + 3;
        }
    }
}
int main() { test_func(); return 0; }

