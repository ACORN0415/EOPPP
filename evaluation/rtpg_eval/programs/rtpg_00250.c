int test_func(void) {
    int v0 = 25;
    int v1 = 69;
    int v2 = 2;
    int v3 = 1;
    int v4 = 5;
    int v5 = 7;
    int i;
    v4 = v4 + v3;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v3;
    }
    v1 = v1 * 6;
    v1 = v1 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
