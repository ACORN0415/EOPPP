// RTPG_5535: vars=6 stmts=10
struct Point { int a; int b; };
void test_func(void) {
    int tmp12 = 9;
    int tmp82 = 19258;
    int a34 = -13;
    int acc34 = 65;
    int dat71 = 72;
    int out81 = 6;
    struct Point s; s.a = -47; s.b = 90;
    int i;
    for (i = 0; i < 46; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        acc34 = acc34 - 3;
        acc34 = out81;
        tmp12 = tmp12 - 1;
        tmp12 = tmp12 - a34;
        acc34 = tmp82 - acc34;
        tmp12 = tmp12 - a34;
        a34 = out81 - 9;
        out81 = out81 - dat71;
        dat71 = dat71 + 4;
        dat71 = acc34 + tmp12;
        }
    }
}
int main() { test_func(); return 0; }

