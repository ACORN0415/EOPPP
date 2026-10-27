// RTPG_6693: vars=6 stmts=3
int idx_arr[16];
enum State { RED, OFF, GREEN };
void test_func(void) {
    int v7 = 43;
    int prev2 = 8440;
    int v29 = 1;
    int z27 = 66;
    int res46 = 78;
    int out73 = 20769;
    enum State st = RED;
    int *ptr = &z27;
    int h0 = -3;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 58; i++) {
        z27 = xn[idx_arr[i]];
        res46 = res46 + z27;
        z27 = v29 - out73;
        prev2 = prev2 - v29;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

