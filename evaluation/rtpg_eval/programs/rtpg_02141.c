int test_func(void) {
    int v0 = 18;
    int v1 = 41;
    int v2 = 32;
    int v3 = 36;
    int i;
    v1 = 42;
    v0 = v0 - v2;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v1;
    }
    v0 = v0 + v0;
    return v0;
}
int main(void) { return test_func(); }
