// RTPG_5278: vars=10 stmts=2
struct Pair { int a; int b; };
void test_func(void) {
    int lo12 = 10;
    int prev44 = 2;
    int prev97 = 75;
    int dat22 = 23018;
    int cur63 = 58572;
    int c2 = 32;
    int x83 = 80;
    int val20 = 4;
    int a36 = 84;
    int b79 = 24;
    struct Pair s; s.a = 4; s.b = 32;
    int i;
    for (i = 0; i < 100; i++) {
        prev44 = x83 - prev44;
        cur63 = cur63 - 5;
        s.a = s.a + s.b;
        if (c2 < 66) {
        prev44 = cur63 + lo12;
        }
    }
}
int main() { test_func(); return 0; }

