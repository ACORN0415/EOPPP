// RTPG_6938: vars=12 stmts=10
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int hi71 = 39716;
    int dat83 = 32;
    int acc86 = -28;
    int sum5 = -36;
    int a20 = 29284;
    float acc42 = 79.57;
    int prev37 = 41590;
    int val96 = 59;
    double lo83 = 34.81;
    int dat70 = 44;
    int acc20 = 41069;
    int acc94 = -47;
    int h0 = 10;
    int sv0 = 0;
    int h1 = -31;
    int sv1 = 0;
    int h2 = 6;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc86 = xn[i];
        dat83 = xn[idx_arr[i]];
        dat83 = acc86;
        dat83 = dat83 - 3;
        hi71 = prev37 * 49;
        lo83 = sum5 - 24;
        a20 = acc20 - hi71;
        acc42 = sum5;
        dat70 = acc86 * 5;
        sum5 = sum5 - 2;
        acc94 = dat83;
        acc42 = acc42 + 1;
        yo[i] = lo83;
    }
}
int main() { test_func(); return 0; }

