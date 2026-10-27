// RTPG_4885: vars=8 stmts=2
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int prev60 = 1;
    int cnt51 = 4411;
    int prev29 = 6;
    int sum36 = 50;
    int a54 = 9;
    int y66 = 27267;
    int dat44 = 33;
    int acc35 = 1;
    struct Data s; s.a = 89; s.b = 3;
    int i;
    for (i = 0; i < 64; i++) {
        acc35 = xn[i];
        cnt51 = a54 - sum36;
        prev60 = cnt51 - -5;
        s.a = s.a + s.b;
        yo[i] = prev60;
    }
}
int main() { test_func(); return 0; }

