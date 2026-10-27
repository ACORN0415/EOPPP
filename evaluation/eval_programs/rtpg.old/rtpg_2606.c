// RTPG_2606: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int cur90 = 17238;
    int res54 = 86;
    int acc63 = 44928;
    int dat18 = 926;
    int out27 = 5;
    int i;
    for (i = 0; i < 16; i++) {
        res54 = xn[i];
        acc63 = out27 + dat18;
        acc63 = acc63 - cur90;
        out27 = out27 + dat18;
        res54 = acc63 + 7;
        acc63 = acc63 - cur90;
        yo[i] = res54;
    }
}
int main() { test_func(); return 0; }

