int test_func(void) {
    int v0 = 25;
    int v1 = 91;
    int v2 = 88;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v2;
    }
    v1 = v1 + v2;
    return v0;
}
int main(void) { return test_func(); }
