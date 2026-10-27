// RTPG_9071: vars=8 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int res5 = 7;
    int sum4 = 0;
    int v2 = 46;
    int lo75 = 51210;
    int prev82 = -30;
    int z96 = 10;
    int hi41 = -36;
    int res40 = 2;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 71;
    int sv1 = 0;
    int h2 = -24;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        lo75 = xn[i];
        z96 = xn[idx_arr[i]];
        z96 = res40 + lo75;
        lo75 = lo75 + z96;
        z96 = z96 + 25;
        yo[i] = prev82;
    }
}
int main() { test_func(); return 0; }

