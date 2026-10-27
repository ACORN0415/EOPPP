// RTPG_9376: vars=7 stmts=7
struct Node { int a; int b; };
enum State { GREEN, BLUE, ON };
void test_func(void) {
    int acc89 = 53285;
    int dat37 = 53111;
    int c67 = 4;
    int v51 = 61611;
    int x60 = 30928;
    int lo41 = 26;
    int sum39 = 0;
    struct Node s; s.a = 26294; s.b = 50629;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 52; i++) {
        dat37 = c67;
        sum39 = x60 + 25264;
        x60 = acc89 + 4;
        acc89 = x60 + dat37;
        sum39 = lo41;
        v51 = lo41 - sum39;
        sum39 = dat37 - sum39;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

