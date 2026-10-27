// RTPG_7288: vars=3 stmts=2
void test_func(void) {
    int v1 = 75;
    int a31 = 32605;
    int lo11 = 35;
    int *ptr = &lo11;
    int i;
    for (i = 0; i < 86; i++) {
        v1 = a31 - lo11;
        a31 = a31 - 4;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

