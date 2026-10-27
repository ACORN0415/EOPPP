// RTPG_2084: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int dat48 = 1;
    int cur34 = 9;
    int prev89 = -27;
    int i;
    for (i = 0; i < 28; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        cur34 = prev89 + cur34;
        prev89 = prev89;
        prev89 = prev89 - 0;
        dat48 = prev89 + 79;
        cur34 = dat48 + cur34;
        prev89 = dat48 + cur34;
        }
    }
}
int main() { test_func(); return 0; }

