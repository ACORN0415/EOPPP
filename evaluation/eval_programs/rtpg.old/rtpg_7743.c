// RTPG_7743: vars=3 stmts=4
void test_func(void) {
    int sum29 = 56;
    int cur2 = 4;
    int v32 = 44540;
    int i;
    for (i = 0; i < 94; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        sum29 = sum29 - 4;
        cur2 = cur2 - 1;
        sum29 = v32 - v32;
        v32 = v32 + cur2;
        }
    }
}
int main() { test_func(); return 0; }

