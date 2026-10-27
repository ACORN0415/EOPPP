// RTPG_2849: vars=6 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int b57 = 8;
    int dat62 = 24082;
    int lo99 = -8;
    int b93 = 10173;
    int acc19 = 3;
    int v48 = 8;
    int i;
    for (i = 0; i < 16; i++) {
        v48 = xn[i];
        b57 = dat62;
        b93 = dat62 + v48;
        b93 = lo99 + b57;
        v48 = v48 + 17;
        b93 = b93 - 2;
        lo99 = dat62 - v48;
        b93 = b93 - 3;
        b93 = dat62 - lo99;
        b57 = dat62;
        acc19 = b93 - b93;
        b57 = b57;
        lo99 = dat62 + b57;
        yo[i] = acc19;
    }
}
int main() { test_func(); return 0; }

