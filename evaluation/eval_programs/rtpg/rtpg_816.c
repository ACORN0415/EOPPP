// RTPG_816: vars=4 stmts=11
void test_func(void) {
    int dat71 = 9;
    int z5 = 10;
    int lo87 = 27;
    int z49 = 8;
    int i;
    for (i = 0; i < 75; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        dat71 = lo87;
        lo87 = lo87 + dat71;
        z49 = z49;
        dat71 = dat71;
        lo87 = lo87 - dat71;
        lo87 = lo87 - lo87;
        lo87 = lo87 - dat71;
        z5 = dat71 + 7504;
        lo87 = dat71 + z5;
        z49 = z49;
        z49 = z5 + dat71;
        }
    }
}
int main() { test_func(); return 0; }

