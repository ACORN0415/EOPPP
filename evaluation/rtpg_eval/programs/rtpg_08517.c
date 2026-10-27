int test_func(void) {
    int v0 = 67;
    int v1 = 78;
    int v2 = 24;
    int v3 = 62;
    int i;
    v3 = v3 + v0;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
