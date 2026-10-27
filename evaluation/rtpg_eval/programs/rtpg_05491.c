int test_func(void) {
    int v0 = 70;
    int v1 = 42;
    int v2 = 20;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v2;
    }
    v1 = v1 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
