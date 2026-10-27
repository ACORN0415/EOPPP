// RTPG_8883: vars=4 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int a59 = -44;
    int val71 = 28;
    int cnt3 = 8;
    int a74 = -49;
    struct Data s; s.a = -17; s.b = 98;
    int *ptr = &val71;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 98; i++) {
        switch (a74) {
            case 0: cnt3 = 7; break;
            case 1: a74 = 63873; break;
            case 2: val71 = -22; break;
            case 3: val71 = 0; break;
            default: break;
        }
        a74 = a74 + 1;
    }
}
int main() { test_func(); return 0; }

