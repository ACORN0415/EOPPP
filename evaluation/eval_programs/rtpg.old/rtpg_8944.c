// RTPG_8944: vars=11 stmts=10
int xn[16];
int yo[16];
struct Point { int a; int b; };
enum State { FAST, ON, GREEN };
void test_func(void) {
    int y48 = -20;
    float val31 = 12.59;
    int val35 = 0;
    int prev47 = 47494;
    int z88 = 8;
    int out54 = 5;
    int out81 = -34;
    int prev41 = 56487;
    float sum3 = 38.25;
    double prev50 = 77.23;
    float v99 = 54.83;
    struct Point s; s.a = 22; s.b = 23;
    enum State st = FAST;
    int i;
    for (i = 0; i < 44; i++) {
        switch (y48) {
            case 0: z88 = 9; break;
            case 1: prev41 = 91; break;
            case 2: val31 = 37626; break;
            case 3: z88 = 4; break;
            default: break;
        }
        y48 = y48 + 1;
    }
}
int main() { test_func(); return 0; }

