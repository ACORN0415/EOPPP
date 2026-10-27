// RTPG_664: vars=8 stmts=12
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int res1 = 3;
    int out24 = 78;
    int b61 = 6;
    int dat13 = 6;
    int lo62 = 19;
    int tmp31 = 49611;
    int a11 = 87;
    int sum65 = 7;
    struct Point s; s.a = -24; s.b = 9;
    int i;
    for (i = 0; i < 64; i++) {
        tmp31 = xn[i];
        sum65 = sum65 + 4;
        a11 = b61 - tmp31;
        b61 = b61 + 1;
        b61 = a11;
        out24 = out24;
        b61 = tmp31 + 66;
        out24 = res1 - tmp31;
        a11 = b61 - tmp31;
        lo62 = tmp31 - sum65;
        a11 = b61 + 17863;
        tmp31 = b61 - a11;
        lo62 = dat13;
        s.a = s.a + s.b;
        yo[i] = res1;
    }
}
int main() { test_func(); return 0; }

