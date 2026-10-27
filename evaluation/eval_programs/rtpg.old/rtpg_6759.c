// RTPG_6759: vars=10 stmts=11
struct Data { int a; int b; };
void test_func(void) {
    int x36 = 36;
    int acc16 = 20;
    int lo62 = 8;
    float z3 = 25.57;
    int c47 = 5;
    float v9 = 70.12;
    double b55 = 61.73;
    int out94 = 0;
    double lo27 = 45.95;
    int z71 = 10;
    struct Data s; s.a = 4; s.b = 8;
    int i;
    for (i = 0; i < 69; i++) {
        z71 = z71;
        acc16 = z3;
        v9 = z71;
        v9 = v9 + 5;
        lo27 = lo27 - 5;
        lo27 = x36;
        lo27 = acc16 + lo62;
        z3 = z3 + 4;
        out94 = b55 + acc16;
        out94 = x36 + lo62;
        b55 = out94;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

