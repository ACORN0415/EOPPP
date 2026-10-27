// RTPG_6073: vars=4 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int cnt35 = 2;
    int acc71 = 59648;
    int x60 = 3;
    int dat89 = 9;
    int i;
    for (i = 0; i < 58; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        dat89 = x60 + cnt35;
        cnt35 = cnt35 - 5;
        x60 = x60 + acc71;
        x60 = cnt35 - x60;
        dat89 = dat89 - x60;
        acc71 = dat89 - acc71;
        acc71 = x60 + 51825;
        }
    }
}
int main() { test_func(); return 0; }

