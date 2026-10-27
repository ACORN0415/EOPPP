// RTPG_3116: vars=8 stmts=12
void test_func(void) {
    int acc63 = 29006;
    int prev47 = 7920;
    int c0 = 9;
    int prev15 = 1;
    int lo66 = 26480;
    int tmp28 = 15;
    int lo83 = 56540;
    int res49 = 13178;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 56090;
    int sv1 = 0;
    int h2 = 67;
    int sv2 = 0;
    int i;
    for (i = 0; i < 44; i++) {
        prev47 = prev47 + c0;
        lo83 = acc63 | prev47;
        tmp28 = acc63 + 8;
        res49 = tmp28 & prev15;
        prev47 = prev47 - prev47;
        c0 = prev47;
        lo66 = tmp28 % prev15;
        lo83 = lo83 % tmp28;
        lo83 = lo83 * 6;
        prev47 = tmp28 / c0;
        tmp28 = tmp28 / acc63;
        c0 = prev47;
        if (prev47 <= 66) {
        prev47 = lo66 + 36248;
        }
    }
}
int main() { test_func(); return 0; }

