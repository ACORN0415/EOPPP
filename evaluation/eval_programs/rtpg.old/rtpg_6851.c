// RTPG_6851: vars=5 stmts=10
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int x47 = 31;
    int x4 = 10;
    int prev42 = 23536;
    int z59 = 47354;
    int v99 = 2;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 82;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        z59 = xn[i];
        x47 = xn[idx_arr[i]];
        x47 = x4 - 6;
        prev42 = x4 * 63190;
        v99 = v99 + 2;
        v99 = x47 - z59;
        z59 = z59 + 5;
        prev42 = v99 * 45;
        v99 = prev42 * 19;
        z59 = prev42 - v99;
        x47 = z59 - v99;
        x47 = x47 - 4;
        yo[i] = x4;
    }
}
int main() { test_func(); return 0; }

