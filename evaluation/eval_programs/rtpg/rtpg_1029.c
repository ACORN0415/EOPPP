// RTPG_1029: vars=4 stmts=11
int idx_arr[16];
struct Pair { int a; int b; };
void test_func(void) {
    int v78 = 5;
    int x5 = 4;
    int v53 = 58;
    int cur54 = 4;
    struct Pair s; s.a = -40; s.b = 1;
    int i;
    for (i = 0; i < 75; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        v78 = cur54 + x5;
        v53 = x5;
        cur54 = v53 - x5;
        cur54 = x5;
        v78 = v78;
        v78 = v53 - cur54;
        x5 = v53 + v53;
        cur54 = v78 - x5;
        x5 = cur54 - x5;
        cur54 = x5 - 9;
        v78 = v78 + 4;
        }
    }
}
int main() { test_func(); return 0; }

