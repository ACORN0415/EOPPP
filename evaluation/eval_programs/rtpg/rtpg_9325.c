// RTPG_9325: vars=5 stmts=8
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int a57 = -32;
    int lo19 = 17259;
    int a23 = 2;
    int b42 = 10;
    int out10 = 55;
    struct Data s; s.a = 6; s.b = 10;
    int i;
    for (i = 0; i < 64; i++) {
        a57 = xn[i];
        out10 = lo19 - out10;
        a57 = a23 ^ lo19;
        a23 = b42 | a23;
        b42 = out10 - a23;
        a23 = b42 + a23;
        a57 = a23 & out10;
        out10 = out10 - b42;
        lo19 = lo19 - -17;
        s.a = s.a + s.b;
        if (a23 <= 79) {
        out10 = a57 + 50339;
        }
        yo[i] = out10;
    }
}
int main() { test_func(); return 0; }

