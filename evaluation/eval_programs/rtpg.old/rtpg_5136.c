// RTPG_5136: vars=8 stmts=10
void test_func(void) {
    int x44 = 3;
    int res77 = 15223;
    int dat62 = 89;
    int a13 = 0;
    int dat22 = 51279;
    int lo13 = 10;
    int a99 = 14;
    int b71 = 14966;
    int i;
    for (i = 0; i < 50; i++) {
        a13 = a13 - 3;
        b71 = b71 + dat62;
        x44 = b71 + a13;
        dat22 = a13;
        dat22 = b71 - -4;
        res77 = res77 + 5;
        res77 = res77 - 4;
        dat62 = a13 - lo13;
        dat22 = x44 - 1;
        lo13 = x44 - dat22;
    }
}
int main() { test_func(); return 0; }

