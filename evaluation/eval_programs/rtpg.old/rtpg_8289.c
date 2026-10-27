// RTPG_8289: vars=4 stmts=9
struct Node { int a; int b; };
void test_func(void) {
    int x95 = 12;
    int prev23 = -48;
    int y1 = -16;
    int a57 = 46626;
    struct Node s; s.a = 37899; s.b = 12;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 27338;
    int sv1 = 0;
    int i;
    for (i = 0; i < 43; i++) {
        y1 = prev23 % a57;
        prev23 = prev23 - x95;
        a57 = a57 * 93;
        x95 = a57 / prev23;
        x95 = x95 - 4;
        x95 = a57 * 73;
        a57 = a57 % prev23;
        x95 = x95 - 5;
        prev23 = prev23 + a57;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

