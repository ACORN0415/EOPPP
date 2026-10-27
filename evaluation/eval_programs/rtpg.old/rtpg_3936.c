// RTPG_3936: vars=5 stmts=8
void test_func(void) {
    int cnt12 = 9;
    int c20 = 40974;
    int dat0 = 7;
    int acc4 = 100;
    int sum55 = 3;
    int i;
    for (i = 0; i < 22; i++) {
        dat0 = c20 + acc4;
        acc4 = dat0 + c20;
        acc4 = dat0 + -32;
        sum55 = dat0 % cnt12;
        sum55 = sum55 + 2;
        sum55 = c20 - acc4;
        c20 = cnt12 + acc4;
        dat0 = sum55 + acc4;
    }
}
int main() { test_func(); return 0; }

