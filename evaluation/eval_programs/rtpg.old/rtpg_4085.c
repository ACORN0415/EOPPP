// RTPG_4085: vars=4 stmts=3
void test_func(void) {
    int dat2 = 5;
    int y23 = 36;
    int dat59 = 46;
    int out87 = 11;
    int i;
    for (i = 0; i < 17; i++) {
        dat59 = dat59 - 1;
        dat59 = dat59 - 5;
        dat2 = dat59 + 10;
        if (dat2 >= -26) {
        out87 = out87 - 1;
        }
    }
}
int main() { test_func(); return 0; }

