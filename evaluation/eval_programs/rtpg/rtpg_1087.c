// RTPG_1087: vars=6 stmts=5
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int lo27 = 84;
    int val14 = 76;
    int x56 = 6;
    int a54 = 26;
    int acc43 = -23;
    int sum94 = 4;
    struct Data s; s.a = -14; s.b = -18;
    int *ptr = &lo27;
    int i;
    for (i = 0; i < 16; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        a54 = a54 + 4;
        acc43 = a54 - x56;
        sum94 = lo27 + acc43;
        a54 = val14 - lo27;
        val14 = sum94 - 34;
        }
    }
}
int main() { test_func(); return 0; }

