// RTPG_162: vars=9 stmts=4
int idx_arr[64];
struct Point { int a; int b; };
void test_func(void) {
    int prev72 = 7;
    int dat32 = 17;
    int tmp97 = 10;
    int out9 = 2;
    int y90 = 42;
    int out26 = 54476;
    int sum35 = 49487;
    int sum12 = 5;
    int hi49 = 51;
    struct Point s; s.a = -46; s.b = 10;
    int *ptr = &dat32;
    int i;
    for (i = 0; i < 100; i++) {
        out9 = xn[idx_arr[i]];
        sum12 = hi49 - out9;
        sum12 = prev72;
        dat32 = sum12 - dat32;
        tmp97 = y90;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
        if (dat32 <= 25) {
        prev72 = prev72 + 2;
        }
    }
}
int main() { test_func(); return 0; }

