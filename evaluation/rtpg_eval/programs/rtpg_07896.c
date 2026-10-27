int test_func(void) {
    int v0 = 42;
    int v1 = 56;
    int v2 = 34;
    int v3 = 44;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v3;
    }
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
