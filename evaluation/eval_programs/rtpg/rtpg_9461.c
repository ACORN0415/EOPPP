// RTPG_9461: vars=6 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int out18 = -23;
    int z30 = -41;
    int res13 = 5;
    int c39 = 2;
    int cnt68 = 6;
    int res46 = 60;
    int i;
    for (i = 0; i < 20; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        out18 = res46 + res13;
        z30 = c39;
        c39 = cnt68 + 46;
        cnt68 = z30 + cnt68;
        c39 = z30 - res13;
        res46 = res46 - 1;
        }
    }
}
int main() { test_func(); return 0; }

