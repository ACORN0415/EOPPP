// RTPG_9338: vars=8 stmts=5
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    double out77 = 5.75;
    int sum59 = 29;
    float prev82 = 54.19;
    int dat47 = 49050;
    int prev54 = 63995;
    int cur60 = 4;
    double c18 = 98.79;
    int y33 = -20;
    struct Pair s; s.a = 11; s.b = 43;
    int i;
    for (i = 0; i < 16; i++) {
        prev54 = xn[i];
        c18 = prev54 - y33;
        y33 = c18 - out77;
        y33 = sum59 - 47;
        prev82 = prev82 + 1;
        c18 = sum59 + dat47;
        s.a = s.a + s.b;
        yo[i] = sum59;
    }
}
int main() { test_func(); return 0; }

