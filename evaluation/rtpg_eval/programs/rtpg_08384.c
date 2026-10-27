int test_func(void) {
    int v0 = 63;
    int v1 = 50;
    int v2 = 53;
    int v3 = 49;
    int v4 = 67;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    v1 = v1 + v0;
    v1 = v1 - v0;
    v4 = 79;
    return v0;
}
int main(void) { return test_func(); }
