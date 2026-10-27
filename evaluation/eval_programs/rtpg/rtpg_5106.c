// RTPG_5106: vars=10 stmts=8
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int tmp99 = 59;
    int out79 = 48;
    int acc38 = 87;
    int sum59 = 44021;
    int out42 = 20;
    int v87 = 10;
    int prev2 = 10;
    int sum47 = -6;
    int a7 = 59032;
    int val24 = 43;
    struct Point s; s.a = 22; s.b = -19;
    int *ptr = &out79;
    int i;
    for (i = 0; i < 64; i++) {
        prev2 = xn[i];
        prev2 = prev2 ^ val24;
        a7 = a7 ^ tmp99;
        val24 = sum47 + 8;
        v87 = v87 - 5;
        out79 = tmp99 | a7;
        acc38 = a7 + acc38;
        v87 = val24 + sum47;
        out79 = prev2 - 19249;
        *ptr = *ptr + 1;
        s.a = s.a + s.b;
        if (prev2 < -21) {
        out42 = a7 - a7;
        }
        yo[i] = out79;
    }
}
int main() { test_func(); return 0; }

