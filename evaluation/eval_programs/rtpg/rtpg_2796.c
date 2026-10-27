// RTPG_2796: vars=3 stmts=12
struct Pair { int a; int b; };
void test_func(void) {
    int tmp14 = -9;
    int z19 = 24;
    int b98 = 6;
    struct Pair s; s.a = 69; s.b = 9;
    int h0 = 7;
    int sv0 = 0;
    int h1 = -15;
    int sv1 = 0;
    int i;
    for (i = 0; i < 25; i++) {
        z19 = b98 - tmp14;
        b98 = tmp14;
        b98 = b98 - tmp14;
        b98 = b98 - b98;
        tmp14 = z19;
        z19 = tmp14 - 16;
        z19 = tmp14 - b98;
        tmp14 = tmp14 - b98;
        z19 = b98 - tmp14;
        tmp14 = b98 + tmp14;
        tmp14 = z19 - 8;
        b98 = tmp14 - b98;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

