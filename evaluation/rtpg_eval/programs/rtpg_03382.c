int test_func(void) {
    int v0 = 23;
    int v1 = 54;
    int v2 = 24;
    int v3 = 13;
    int i;
    v3 = 49;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v2;
    }
    v3 = v3 + v2;
    return v0;
}
int main(void) { return test_func(); }
