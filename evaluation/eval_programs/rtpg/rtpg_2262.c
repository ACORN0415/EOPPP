// RTPG_2262: vars=7 stmts=3
void test_func(void) {
    int dat80 = 18;
    int dat91 = -49;
    int prev19 = 30;
    int c34 = 5659;
    int dat92 = 28;
    int dat95 = -7;
    int res85 = 49;
    int *ptr = &res85;
    int h0 = 18237;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        dat92 = dat92;
        res85 = res85 - 2;
        dat92 = dat80 - dat91;
        *ptr = *ptr + 3;
        if (dat92 >= 29) {
        res85 = res85 + 2;
        }
    }
}
int main() { test_func(); return 0; }

