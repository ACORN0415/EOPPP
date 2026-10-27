// RTPG_8526: vars=10 stmts=9
int idx_arr[64];
enum State { ON, SLOW, OFF };
void test_func(void) {
    int y70 = 32;
    int tmp94 = 8;
    int v36 = 8;
    int sum30 = 9;
    int c32 = 2;
    int v4 = 3;
    int b11 = 24;
    int res35 = 2;
    int lo60 = -37;
    int prev63 = 0;
    enum State st = ON;
    int *ptr = &prev63;
    int i;
    for (i = 0; i < 63; i++) {
        sum30 = xn[idx_arr[i]];
        prev63 = tmp94;
        prev63 = v36 + sum30;
        v4 = lo60 + v36;
        sum30 = sum30 + 2;
        v4 = prev63;
        b11 = tmp94;
        sum30 = c32 + 2;
        b11 = v36 + b11;
        res35 = v4;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

