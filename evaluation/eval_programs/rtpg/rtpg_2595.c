// RTPG_2595: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int dat18 = 17238;
    int acc63 = 86;
    int cur90 = 44928;
    int res54 = 926;
    int out27 = 5;
    int i;
    for (i = 0; i < 16; i++) {
        acc63 = xn[i];
        cur90 = out27 + res54;
        cur90 = cur90 - dat18;
        out27 = out27 + res54;
        acc63 = cur90 + 7;
        cur90 = cur90 - dat18;
        yo[i] = acc63;
    }
}
int main() { test_func(); return 0; }

