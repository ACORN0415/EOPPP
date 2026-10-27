// RTPG_6484: vars=3 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int b39 = 84;
    int z46 = 2;
    int cnt75 = 58;
    struct Point s; s.a = 79; s.b = 22;
    int i;
    for (i = 0; i < 87; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        b39 = z46 + cnt75;
        b39 = b39 - 4;
        b39 = cnt75;
        b39 = b39 + 10;
        }
    }
}
int main() { test_func(); return 0; }

