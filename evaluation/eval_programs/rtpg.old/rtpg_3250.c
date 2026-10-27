// RTPG_3250: vars=8 stmts=8
int idx_arr[64];
void test_func(void) {
    int out52 = 46;
    int lo91 = 19188;
    int lo45 = 11648;
    int acc58 = 20;
    int res70 = 21039;
    int lo26 = 25066;
    int hi9 = 44489;
    int dat95 = 28719;
    int i;
    for (i = 0; i < 31; i++) {
        dat95 = xn[idx_arr[i]];
        acc58 = acc58 - 5;
        acc58 = lo26 - acc58;
        lo91 = lo45 + acc58;
        acc58 = acc58 + 7;
        res70 = lo91;
        lo91 = acc58 - lo45;
        dat95 = hi9 + 40;
        lo26 = out52 - 21517;
    }
}
int main() { test_func(); return 0; }

