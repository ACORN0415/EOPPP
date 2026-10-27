// RTPG_4598: vars=6 stmts=12
void test_func(void) {
    float prev67 = 74.12;
    float dat75 = 58.21;
    int x19 = 4710;
    int x10 = 47;
    int lo93 = 3;
    int hi36 = 23;
    int i;
    for (i = 0; i < 16; i++) {
        dat75 = dat75 + 66;
        lo93 = x19 + 9;
        lo93 = lo93 + 3;
        x19 = x19 + 5;
        x10 = x19 - hi36;
        hi36 = hi36 - 3;
        hi36 = lo93 - 7;
        x19 = lo93 + x19;
        lo93 = lo93 + 1;
        lo93 = lo93 + 2;
        hi36 = hi36 + 4;
        lo93 = dat75 + x19;
        if (hi36 >= 54) {
        x19 = x19 + 3;
        }
    }
}
int main() { test_func(); return 0; }

