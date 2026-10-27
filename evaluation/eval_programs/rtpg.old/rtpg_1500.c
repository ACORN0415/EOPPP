// RTPG_1500: vars=4 stmts=11
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int v23 = -23;
    int acc63 = 7;
    int tmp19 = -14;
    int out69 = 51793;
    int h0 = 20;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 37; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        out69 = out69 + 38;
        v23 = out69;
        acc63 = out69 + v23;
        v23 = out69 - tmp19;
        v23 = tmp19 - v23;
        v23 = v23 + 5;
        tmp19 = tmp19 + tmp19;
        v23 = tmp19 + acc63;
        v23 = tmp19 - acc63;
        acc63 = v23 + acc63;
        tmp19 = tmp19 - 3;
        }
    }
}
int main() { test_func(); return 0; }

