// RTPG_7243: vars=4 stmts=6
void test_func(void) {
    int dat17 = 7;
    int tmp32 = 21;
    int a40 = 13022;
    int dat80 = 48;
    int i;
    for (i = 0; i < 51; i++) {
        tmp32 = dat17 - dat80;
        dat17 = dat17;
        dat80 = tmp32 - tmp32;
        a40 = dat17 + a40;
        dat17 = dat80 - dat80;
        dat17 = tmp32 + dat17;
        if (dat17 > 49) {
        tmp32 = tmp32 + 4;
        }
    }
}
int main() { test_func(); return 0; }

