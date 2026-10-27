// RTPG_5496: vars=4 stmts=9
int idx_arr[32];
enum State { ON, BLUE, GREEN };
void test_func(void) {
    int hi15 = 52;
    int v54 = 23389;
    int res43 = 46821;
    int v11 = 20;
    enum State st = ON;
    int i;
    for (i = 0; i < 26; i++) {
        v54 = xn[idx_arr[i]];
        hi15 = v11 + 15688;
        v54 = v54 + v11;
        hi15 = hi15 - 37;
        hi15 = res43;
        hi15 = v11;
        v11 = res43 + v54;
        v11 = res43;
        v54 = v54 - 34;
        v54 = v54 + 4;
    }
}
int main() { test_func(); return 0; }

