// RTPG_119: vars=4 stmts=9
int idx_arr[32];
void test_func(void) {
    int y70 = 64088;
    int y5 = 65;
    int prev93 = 89;
    int v22 = 2;
    int h0 = -48;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 72; i++) {
        v22 = xn[idx_arr[i]];
        y5 = y5 * -39;
        prev93 = y70 - y5;
        y5 = y5 + v22;
        y70 = v22 + 9;
        y5 = y5 + y70;
        v22 = v22 + prev93;
        y70 = y70 * -2;
        y70 = y70 - y5;
        v22 = y5 + 25225;
    }
}
int main() { test_func(); return 0; }

