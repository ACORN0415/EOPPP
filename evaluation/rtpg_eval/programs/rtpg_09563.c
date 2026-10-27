int test_func(void) {
    int v0 = 21;
    int v1 = 82;
    int v2 = 41;
    int v3 = 59;
    int v4 = 30;
    int v5 = 100;
    int i;
    v5 = v5 - v4;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v5;
    }
    v1 = v1 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
