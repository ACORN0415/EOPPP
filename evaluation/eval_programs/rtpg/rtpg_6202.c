// RTPG_6202: vars=6 stmts=5
void test_func(void) {
    int b91 = 61;
    int acc40 = 56485;
    int out73 = 3;
    int out72 = -44;
    int v7 = 51794;
    int y65 = -31;
    int *ptr = &out73;
    int i;
    for (i = 0; i < 53; i++) {
        v7 = out72;
        b91 = b91 - 1;
        b91 = out73 % out72;
        out72 = out72 + 4;
        out73 = out73 - 2;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

