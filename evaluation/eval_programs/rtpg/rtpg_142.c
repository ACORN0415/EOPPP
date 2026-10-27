// RTPG_142: vars=9 stmts=5
int idx_arr[64];
enum State { FAST, BLUE, RED };
void test_func(void) {
    int c18 = 80;
    double val39 = 49.92;
    int tmp81 = 40518;
    int y39 = 4;
    int acc28 = 22;
    int lo53 = 24022;
    int hi94 = 54829;
    int cnt55 = 6;
    int prev92 = 53;
    enum State st = FAST;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 82;
    int sv1 = 0;
    int h2 = 53;
    int sv2 = 0;
    int h3 = 22;
    int sv3 = 0;
    int i;
    for (i = 0; i < 71; i++) {
        tmp81 = xn[idx_arr[i]];
        c18 = acc28 ^ y39;
        hi94 = hi94 + 1;
        lo53 = lo53 ^ cnt55;
        hi94 = acc28 / tmp81;
        acc28 = val39 * -38;
    }
}
int main() { test_func(); return 0; }

