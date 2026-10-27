// RTPG_2949: vars=4 stmts=4
void test_func(void) {
    int b15 = 55264;
    int dat48 = 2;
    int c78 = -25;
    int dat6 = 3;
    int i;
    for (i = 0; i < 28; i++) {
        dat48 = b15 - dat6;
        c78 = dat6 - dat48;
        b15 = b15 - dat6;
        b15 = c78 - dat6;
        if (b15 >= -2) {
        c78 = dat48 + -4;
        }
    }
}
int main() { test_func(); return 0; }

