int test_func(void) {
    int v0 = 80;
    int v1 = 42;
    int v2 = 66;
    int v3 = 72;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v3;
    }
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
