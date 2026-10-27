// RTPG_2504: vars=5 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    double b15 = 9.26;
    float sum89 = 40.28;
    int prev13 = 6;
    int a90 = 49;
    int b99 = 40;
    struct Data s; s.a = 9770; s.b = 26;
    int i;
    for (i = 0; i < 51; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        sum89 = a90 + 1;
        a90 = sum89 + 1;
        a90 = a90 - 5;
        sum89 = sum89 - 2;
        }
    }
}
int main() { test_func(); return 0; }

