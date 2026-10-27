// RTPG_5043: vars=10 stmts=8
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int v87 = 59;
    int out42 = 48;
    int sum59 = 87;
    int acc38 = 44021;
    int val24 = 20;
    int prev2 = 10;
    int out79 = 10;
    int a7 = -6;
    int tmp99 = 59032;
    int sum47 = 43;
    struct Point s; s.a = 22; s.b = -19;
    int *ptr = &out42;
    int i;
    for (i = 0; i < 64; i++) {
        out79 = xn[i];
        out79 = out79 ^ tmp99;
        tmp99 = tmp99 ^ v87;
        sum47 = a7 + 8;
        prev2 = prev2 - 5;
        out42 = v87 | a7;
        sum59 = tmp99 + sum59;
        prev2 = sum47 + a7;
        out42 = out79 - 19249;
        *ptr = *ptr + 1;
        s.a = s.a + s.b;
        if (out79 < -21) {
        val24 = tmp99 - tmp99;
        }
        yo[i] = out42;
    }
}
int main() { test_func(); return 0; }

