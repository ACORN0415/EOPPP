// RTPG_5740: vars=10 stmts=4
int idx_arr[32];
enum State { OFF, ON, SLOW };
void test_func(void) {
    int y15 = 6;
    int x25 = 61010;
    int b73 = 15;
    int cnt90 = 42;
    int val71 = 12706;
    int dat55 = 14749;
    int prev4 = 3;
    int out11 = 21;
    int x30 = 8367;
    int x51 = -25;
    enum State st = OFF;
    int i;
    for (i = 0; i < 28; i++) {
        out11 = xn[idx_arr[i]];
        dat55 = dat55 + 1;
        y15 = y15 + 3;
        prev4 = x30 - val71;
        b73 = x30 | out11;
    }
}
int main() { test_func(); return 0; }

