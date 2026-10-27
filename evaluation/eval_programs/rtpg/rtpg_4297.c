// RTPG_4297: vars=11 stmts=12
int idx_arr[64];
void test_func(void) {
    int z48 = 4;
    int prev52 = 19;
    int c66 = 19749;
    int a3 = 64;
    int y1 = 7;
    int c42 = 5;
    int a96 = -48;
    int y31 = 29;
    int acc47 = 15975;
    int a97 = 98;
    int b8 = 40;
    int i;
    for (i = 0; i < 33; i++) {
        b8 = xn[idx_arr[i]];
        y1 = y1 + 5;
        acc47 = c66 & a96;
        y1 = z48;
        y31 = acc47 / a3;
        c66 = y1 % a3;
        y1 = prev52 + a96;
        b8 = a3 ^ b8;
        z48 = z48 + 4;
        y1 = y1 + a96;
        acc47 = z48 / a97;
        z48 = z48 - 2;
        y1 = c42 % prev52;
    }
}
int main() { test_func(); return 0; }

