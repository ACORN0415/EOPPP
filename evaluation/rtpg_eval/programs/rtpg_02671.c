int test_func(void) {
    int v0 = 54;
    int v1 = 98;
    int v2 = 27;
    int v3 = 94;
    int v4 = 22;
    int v5 = 56;
    int i;
    v5 = v5 + v3;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v3;
    }
    v2 = v2 - v4;
    return v0;
}
int main(void) { return test_func(); }
