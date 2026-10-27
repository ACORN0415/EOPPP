// RTPG_2445: vars=3 stmts=2
int idx_arr[32];
void test_func(void) {
    int lo64 = 1;
    int cur80 = 37;
    float out53 = 64.73;
    int *ptr = &out53;
    int h0 = 35;
    int sv0 = 0;
    int h1 = 59;
    int sv1 = 0;
    int i;
    for (i = 0; i < 41; i++) {
        cur80 = xn[idx_arr[i]];
        out53 = out53 - lo64;
        lo64 = cur80;
        *ptr = *ptr + 5;
        if (lo64 > 85) {
        out53 = cur80 - out53;
        }
    }
}
int main() { test_func(); return 0; }

