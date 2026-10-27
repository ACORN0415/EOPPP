// RTPG_8593: vars=8 stmts=8
struct Data { int a; int b; };
void test_func(void) {
    float c16 = 18.20;
    float v39 = 42.97;
    int dat63 = 74;
    int hi64 = -7;
    int tmp4 = 50;
    int a90 = 51;
    int sum95 = 67;
    int v0 = 4;
    struct Data s; s.a = 7; s.b = 55;
    int i;
    for (i = 0; i < 30; i++) {
        hi64 = sum95;
        sum95 = tmp4 + v39;
        v0 = v0 - 5;
        c16 = v0;
        sum95 = tmp4 - dat63;
        a90 = tmp4 + 9;
        v0 = v39 + dat63;
        a90 = a90 + 2;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

