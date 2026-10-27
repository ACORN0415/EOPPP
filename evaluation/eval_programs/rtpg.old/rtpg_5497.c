// RTPG_5497: vars=14 stmts=12
struct Data { int a; int b; };
enum State { OFF, GREEN, RED };
void test_func(void) {
    int res82 = 30;
    int a43 = 49;
    int a67 = -37;
    int sum94 = 15622;
    int cnt79 = 81;
    int cur85 = 37;
    int y39 = 31174;
    int z11 = 95;
    int out34 = 1;
    int val36 = 53;
    int c70 = 27;
    int a31 = -29;
    int cur75 = 9;
    int dat79 = 4;
    struct Data s; s.a = 10; s.b = 17;
    enum State st = OFF;
    int i;
    for (i = 0; i < 14; i++) {
        switch (val36) {
            case 0: res82 = 9; break;
            case 1: out34 = 44; break;
            case 2: a67 = -6; break;
            case 3: cur75 = 14; break;
            default: break;
        }
        val36 = val36 + 1;
    }
}
int main() { test_func(); return 0; }

