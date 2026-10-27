// RTPG_6905: vars=4 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int tmp49 = 2;
    int tmp38 = 16;
    int res29 = 88;
    int a33 = 60;
    struct Data s; s.a = 10803; s.b = 6;
    int i;
    for (i = 0; i < 61; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        res29 = res29 + 5;
        a33 = tmp49;
        }
    }
}
int main() { test_func(); return 0; }

