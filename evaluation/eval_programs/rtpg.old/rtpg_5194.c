// RTPG_5194: vars=5 stmts=8
enum State { OFF, GREEN, SLOW };
void test_func(void) {
    int out40 = 21056;
    int v92 = 26679;
    int x73 = -44;
    int cur86 = 45;
    int tmp71 = 33;
    enum State st = OFF;
    int i;
    for (i = 0; i < 50; i++) {
        x73 = x73 + 2;
        cur86 = cur86 - 3;
        x73 = v92;
        tmp71 = x73 + 29;
        cur86 = x73 + v92;
        tmp71 = v92;
        out40 = tmp71 - 25;
        x73 = x73 - out40;
    }
}
int main() { test_func(); return 0; }

