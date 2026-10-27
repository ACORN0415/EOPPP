int test_func(void) {
    int v0 = 38;
    int v1 = 70;
    int v2 = 78;
    int v3 = 69;
    int i;
    v0 = 22;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
