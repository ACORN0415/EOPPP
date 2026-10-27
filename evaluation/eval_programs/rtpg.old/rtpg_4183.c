// RTPG_4183: vars=7 stmts=4
void test_func(void) {
    int prev86 = 7;
    int prev95 = 64;
    int b63 = 2;
    int hi45 = 6;
    int z59 = 21;
    int dat66 = 0;
    int dat94 = -8;
    int i;
    for (i = 0; i < 56; i++) {
        z59 = prev86 + b63;
        dat94 = prev95;
        dat94 = dat94 + 3;
        b63 = dat94 - hi45;
    }
}
int main() { test_func(); return 0; }

