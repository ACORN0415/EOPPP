// RTPG_2930: vars=7 stmts=6
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int z56 = 12;
    int x91 = -17;
    int cur73 = 18;
    int res8 = 8;
    int a96 = 4;
    int cnt79 = 38;
    int a83 = 18215;
    int h0 = 80;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int h2 = 10;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x91 = xn[i];
        res8 = xn[idx_arr[i]];
        cur73 = a96;
        z56 = cnt79;
        a83 = z56 * 78;
        cnt79 = z56 + 15067;
        z56 = res8;
        z56 = cnt79 - a83;
        yo[i] = x91;
    }
}
int main() { test_func(); return 0; }

