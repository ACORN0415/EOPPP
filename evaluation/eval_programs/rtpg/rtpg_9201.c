// RTPG_9201: vars=3 stmts=5
int idx_arr[64];
void test_func(void) {
    int cur48 = 0;
    int z34 = 48;
    int out2 = 57069;
    int h0 = 25;
    int sv0 = 0;
    int h1 = 4236;
    int sv1 = 0;
    int i;
    for (i = 0; i < 94; i++) {
        out2 = xn[idx_arr[i]];
        cur48 = z34 ^ cur48;
        z34 = z34 - 4;
        z34 = z34 + -8;
        z34 = z34 & out2;
        out2 = out2 * 30;
    }
}
int main() { test_func(); return 0; }

