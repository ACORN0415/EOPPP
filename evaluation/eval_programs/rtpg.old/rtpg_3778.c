// RTPG_3778: vars=3 stmts=2
void test_func(void) {
    int res77 = 5;
    int dat15 = 1;
    int dat96 = 1;
    int h0 = 76;
    int sv0 = 0;
    int h1 = -30;
    int sv1 = 0;
    int i;
    for (i = 0; i < 31; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        dat96 = dat96 + dat15;
        dat96 = dat96 - dat15;
        }
    }
}
int main() { test_func(); return 0; }

