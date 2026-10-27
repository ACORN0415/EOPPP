// RTPG_8048: vars=4 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int lo93 = -28;
    int x10 = -27;
    int b41 = 7;
    int tmp49 = 0;
    int *ptr = &lo93;
    int h0 = 30822;
    int sv0 = 0;
    int h1 = 27271;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        b41 = xn[i];
        lo93 = xn[idx_arr[i]];
        lo93 = x10 - lo93;
        b41 = b41 + 3;
        tmp49 = tmp49 + 2;
        *ptr = *ptr + 5;
        if (tmp49 > 22) {
        tmp49 = x10;
        }
        yo[i] = b41;
    }
}
int main() { test_func(); return 0; }

