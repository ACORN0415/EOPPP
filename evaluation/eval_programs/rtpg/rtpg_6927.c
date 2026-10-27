// RTPG_6927: vars=5 stmts=10
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int prev42 = 31;
    int v99 = 10;
    int x47 = 23536;
    int x4 = 47354;
    int z59 = 2;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 82;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x4 = xn[i];
        prev42 = xn[idx_arr[i]];
        prev42 = v99 - 6;
        x47 = v99 * 63190;
        z59 = z59 + 2;
        z59 = prev42 - x4;
        x4 = x4 + 5;
        x47 = z59 * 45;
        z59 = x47 * 19;
        x4 = x47 - z59;
        prev42 = x4 - z59;
        prev42 = prev42 - 4;
        yo[i] = v99;
    }
}
int main() { test_func(); return 0; }

