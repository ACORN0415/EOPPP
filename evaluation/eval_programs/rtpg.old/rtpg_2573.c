// RTPG_2573: vars=8 stmts=4
int idx_arr[64];
enum State { OFF, GREEN, RED };
void test_func(void) {
    int tmp28 = 2;
    int res54 = 20;
    int res31 = 21;
    int tmp27 = 65;
    int z88 = 56;
    int res13 = 25;
    int tmp57 = 18688;
    int a39 = 4;
    enum State st = OFF;
    int i;
    for (i = 0; i < 20; i++) {
        switch (res13) {
            case 0: tmp27 = 5; break;
            case 1: res13 = 41885; break;
            case 2: res31 = 27323; break;
            case 3: a39 = 55; break;
            default: break;
        }
        res13 = res13 + 1;
    }
}
int main() { test_func(); return 0; }

