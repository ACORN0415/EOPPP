// RTPG_6862: vars=12 stmts=10
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int prev37 = 39716;
    int a20 = 32;
    int acc94 = -28;
    int sum5 = -36;
    int val96 = 29284;
    float dat83 = 79.57;
    int acc86 = 41590;
    int acc42 = 59;
    double hi71 = 34.81;
    int acc20 = 44;
    int lo83 = 41069;
    int dat70 = -47;
    int h0 = 10;
    int sv0 = 0;
    int h1 = -31;
    int sv1 = 0;
    int h2 = 6;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc94 = xn[i];
        a20 = xn[idx_arr[i]];
        a20 = acc94;
        a20 = a20 - 3;
        prev37 = acc86 * 49;
        hi71 = sum5 - 24;
        val96 = lo83 - prev37;
        dat83 = sum5;
        acc20 = acc94 * 5;
        sum5 = sum5 - 2;
        dat70 = a20;
        dat83 = dat83 + 1;
        yo[i] = hi71;
    }
}
int main() { test_func(); return 0; }

