// RTPG_396: vars=5 stmts=12
int idx_arr[32];
void test_func(void) {
    int y4 = -39;
    int x44 = 43;
    int z5 = 81;
    int cnt55 = 74;
    int lo68 = -34;
    int i;
    for (i = 0; i < 92; i++) {
        y4 = xn[idx_arr[i]];
        z5 = z5;
        lo68 = y4 - z5;
        cnt55 = cnt55;
        z5 = x44 + lo68;
        x44 = x44 + 2;
        cnt55 = lo68 - z5;
        z5 = lo68 + z5;
        y4 = lo68 + 3;
        lo68 = x44;
        lo68 = x44 - 4;
        cnt55 = x44 - lo68;
        y4 = y4 - z5;
    }
}
int main() { test_func(); return 0; }

