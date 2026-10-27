// RTPG_3912: vars=5 stmts=9
struct Point { int a; int b; };
enum State { BLUE, RED, SLOW };
void test_func(void) {
    int tmp21 = 0;
    int lo37 = 50;
    int acc65 = 7;
    int x60 = 6;
    int lo38 = 29;
    struct Point s; s.a = 54742; s.b = -35;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 6; i++) {
        acc65 = x60 + lo38;
        tmp21 = tmp21 + lo37;
        lo38 = lo38 + 4;
        lo37 = lo37 - acc65;
        lo37 = x60;
        tmp21 = lo38 - tmp21;
        lo37 = lo37 - 4;
        lo37 = x60 + 87;
        lo38 = lo37 + lo38;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

