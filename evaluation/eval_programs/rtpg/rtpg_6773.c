// RTPG_6773: vars=6 stmts=3
int idx_arr[16];
enum State { RED, OFF, GREEN };
void test_func(void) {
    int out73 = 43;
    int v29 = 8440;
    int v7 = 1;
    int prev2 = 66;
    int res46 = 78;
    int z27 = 20769;
    enum State st = RED;
    int *ptr = &prev2;
    int h0 = -3;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 58; i++) {
        prev2 = xn[idx_arr[i]];
        res46 = res46 + prev2;
        prev2 = v7 - z27;
        v29 = v29 - v7;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

