// RTPG_6829: vars=4 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int a33 = 2;
    int tmp49 = 16;
    int tmp38 = 88;
    int res29 = 60;
    struct Data s; s.a = 10803; s.b = 6;
    int i;
    for (i = 0; i < 61; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        tmp38 = tmp38 + 5;
        res29 = a33;
        }
    }
}
int main() { test_func(); return 0; }

