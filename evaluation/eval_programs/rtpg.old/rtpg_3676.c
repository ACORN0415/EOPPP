// RTPG_3676: vars=6 stmts=6
struct Point { int a; int b; };
void test_func(void) {
    int v11 = 4;
    int cur81 = 41;
    int z73 = 36;
    int x3 = 79;
    int hi75 = 35;
    int x64 = 13;
    struct Point s; s.a = 58863; s.b = 1;
    int h0 = 42383;
    int sv0 = 0;
    int h1 = 48;
    int sv1 = 0;
    int h2 = 18955;
    int sv2 = 0;
    int i;
    for (i = 0; i < 79; i++) {
        switch (x64) {
            case 0: hi75 = 2; break;
            case 1: hi75 = 56; break;
            case 2: x64 = 51586; break;
            default: break;
        }
        x64 = x64 + 1;
    }
}
int main() { test_func(); return 0; }

