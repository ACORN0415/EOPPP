// RTPG_4114: vars=4 stmts=3
void test_func(void) {
    int out87 = 5;
    int dat2 = 36;
    int dat59 = 46;
    int y23 = 11;
    int i;
    for (i = 0; i < 17; i++) {
        dat59 = dat59 - 1;
        dat59 = dat59 - 5;
        out87 = dat59 + 10;
        if (out87 >= -26) {
        y23 = y23 - 1;
        }
    }
}
int main() { test_func(); return 0; }

