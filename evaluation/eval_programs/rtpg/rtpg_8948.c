// RTPG_8948: vars=4 stmts=3
struct Data { int a; int b; };
void test_func(void) {
    int cur42 = 30175;
    int prev52 = 0;
    int acc0 = 28436;
    int acc92 = 23917;
    struct Data s; s.a = 26094; s.b = 51860;
    int h0 = 83;
    int sv0 = 0;
    int h1 = -19;
    int sv1 = 0;
    int i;
    for (i = 0; i < 91; i++) {
        switch (prev52) {
            case 0: prev52 = -8; break;
            case 1: cur42 = 36; break;
            case 2: acc0 = 33; break;
            case 3: prev52 = 9; break;
            default: break;
        }
        prev52 = prev52 + 1;
    }
}
int main() { test_func(); return 0; }

