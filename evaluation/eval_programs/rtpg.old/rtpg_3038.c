// RTPG_3038: vars=3 stmts=12
int idx_arr[64];
void test_func(void) {
    int b4 = 18495;
    int a66 = 58983;
    int lo89 = 57820;
    int h0 = -15;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 84; i++) {
        b4 = xn[idx_arr[i]];
        lo89 = a66 + 13385;
        b4 = b4 - 3;
        a66 = a66 * 56;
        b4 = lo89 + b4;
        lo89 = lo89 - 9;
        a66 = lo89 * 44;
        b4 = a66 + b4;
        a66 = b4 - a66;
        b4 = b4 * 74;
        a66 = b4 + 1;
        a66 = a66 * 91;
        a66 = lo89 * 1;
    }
}
int main() { test_func(); return 0; }

