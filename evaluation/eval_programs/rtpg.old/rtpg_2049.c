// RTPG_2049: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int out2 = 5;
    int tmp31 = 5;
    int c42 = 44;
    int lo82 = 3;
    int h0 = 1726;
    int sv0 = 0;
    int h1 = 18297;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        c42 = xn[i];
        tmp31 = c42 * 44;
        c42 = tmp31 + c42;
        c42 = c42 + 1;
        yo[i] = lo82;
    }
}
int main() { test_func(); return 0; }

