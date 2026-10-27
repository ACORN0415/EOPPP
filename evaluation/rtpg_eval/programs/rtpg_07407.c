int test_func(void) {
    int v0 = 28;
    int v1 = 90;
    int v2 = 2;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 * 5;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
