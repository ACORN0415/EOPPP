int test_func(void) {
    int v0 = 29;
    int v1 = 5;
    int v2 = 42;
    int v3 = 76;
    int v4 = 74;
    int v5 = 60;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 20; i++) {
        v2 = v2 + v3;
    }
    v0 = v0 * 2;
    return v0;
}
int main(void) { return test_func(); }
