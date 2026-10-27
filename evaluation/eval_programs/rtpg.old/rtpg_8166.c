// RTPG_8166: vars=6 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int hi53 = 73;
    int sum24 = 59065;
    int v93 = 34;
    int cnt25 = 17;
    int cur35 = 58437;
    int sum74 = 12762;
    int h0 = -17;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cnt25 = xn[i];
        sum74 = cur35 + cnt25;
        hi53 = cur35 + cnt25;
        cnt25 = cnt25 * 62;
        sum74 = cnt25 + v93;
        yo[i] = cnt25;
    }
}
int main() { test_func(); return 0; }

