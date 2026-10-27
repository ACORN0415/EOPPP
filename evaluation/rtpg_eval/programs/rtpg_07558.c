int test_func(void) {
    int v0 = 42;
    int v1 = 44;
    int v2 = 10;
    int i;
    v2 = 41;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v1;
    }
    v2 = v2 + v0;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
