// RTPG_1537: vars=9 stmts=7
int xn[64];
int yo[64];
struct Pair { int a; int b; };
enum State { GREEN, OFF, SLOW };
void test_func(void) {
    int v30 = 33;
    float cnt51 = 91.34;
    int b29 = 56;
    double prev91 = 30.30;
    int v13 = 38853;
    double prev48 = 15.96;
    int hi41 = 3;
    int acc81 = 9;
    double cur12 = 82.03;
    struct Pair s; s.a = 91; s.b = 3;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 64; i++) {
        b29 = xn[i];
        acc81 = b29;
        prev48 = prev91 - b29;
        v13 = prev48;
        b29 = acc81;
        b29 = b29 - 37212;
        b29 = b29 - 5;
        cnt51 = cnt51 + 1;
        s.a = s.a + s.b;
        yo[i] = cnt51;
    }
}
int main() { test_func(); return 0; }

