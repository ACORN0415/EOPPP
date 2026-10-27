// RTPG_4552: vars=4 stmts=3
void test_func(void) {
    int y51 = 6;
    int dat99 = 7;
    int z73 = 43;
    int acc31 = -1;
    int i;
    for (i = 0; i < 62; i++) {
        y51 = z73;
        y51 = dat99 - z73;
        acc31 = y51 - dat99;
        if (y51 >= 15) {
        acc31 = y51 - 7;
        }
    }
}
int main() { test_func(); return 0; }

