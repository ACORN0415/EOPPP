// RTPG_1030: vars=7 stmts=4
struct Pair { int a; int b; };
void test_func(void) {
    int hi6 = -15;
    int out26 = 41;
    float a91 = 84.35;
    float v16 = 93.74;
    float out31 = 55.44;
    int res50 = 5;
    int acc52 = 10;
    struct Pair s; s.a = 60; s.b = 8;
    int i;
    for (i = 0; i < 35; i++) {
        a91 = v16 - acc52;
        res50 = acc52 % res50;
        a91 = res50 + v16;
        out26 = v16 + out31;
        s.a = s.a + s.b;
        if (out31 > 98) {
        res50 = acc52 + out31;
        }
    }
}
int main() { test_func(); return 0; }

