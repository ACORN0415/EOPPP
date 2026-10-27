// RTPG_5685: vars=9 stmts=4
void test_func(void) {
    int res79 = -20;
    int acc93 = -26;
    int tmp65 = 14;
    int acc96 = 70;
    int b80 = 27;
    int x99 = 34;
    int x84 = 4;
    int c15 = 64;
    int dat49 = 0;
    int h0 = 39;
    int sv0 = 0;
    int h1 = 77;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        x99 = x84 + res79;
        dat49 = res79 - res79;
        acc96 = acc96 + 1;
        x84 = acc96 - x84;
        }
    }
}
int main() { test_func(); return 0; }

