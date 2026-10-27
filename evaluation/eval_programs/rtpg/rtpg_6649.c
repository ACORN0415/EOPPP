// RTPG_6649: vars=6 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    float acc15 = 10.53;
    double c77 = 22.98;
    float lo72 = 53.13;
    int c51 = 1;
    int hi12 = 10;
    int b4 = 75;
    struct Data s; s.a = 0; s.b = 3;
    int i;
    for (i = 0; i < 97; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        c51 = lo72 + c77;
        c77 = lo72 - 8;
        }
    }
}
int main() { test_func(); return 0; }

