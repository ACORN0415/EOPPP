// RTPG_3647: vars=7 stmts=6
void test_func(void) {
    int b59 = 31;
    int c51 = 17631;
    int z13 = 45;
    int z87 = 16505;
    int cnt33 = -46;
    int a71 = -44;
    int out1 = 65;
    int *ptr = &a71;
    int i;
    for (i = 0; i < 94; i++) {
        c51 = b59;
        b59 = c51 - 17;
        out1 = out1 / a71;
        out1 = z13 - 6;
        out1 = cnt33 - c51;
        c51 = z87 | b59;
        *ptr = *ptr + 5;
        if (cnt33 > 3) goto done;
    }
done:
    out1 = 0;
}
int main() { test_func(); return 0; }

