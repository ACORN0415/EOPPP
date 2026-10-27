// RTPG_3930: vars=10 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int acc99 = 12;
    double lo25 = 64.08;
    int b83 = 18707;
    int tmp48 = 17414;
    float out48 = 38.17;
    float val74 = 9.84;
    int dat11 = 7;
    int c6 = 31;
    double z42 = 45.80;
    int a39 = 10;
    struct Point s; s.a = 2; s.b = 56640;
    int i;
    for (i = 0; i < 74; i++) {
        tmp48 = dat11 - val74;
        val74 = val74 - 4;
        b83 = b83 - 2;
        b83 = b83 - 1;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

