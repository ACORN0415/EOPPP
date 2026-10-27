int test_func(void) {
    int v0 = 93;
    int v1 = 97;
    int v2 = 77;
    int i;
    v2 = v2 + v0;
    v0 = v0 - v1;
    v2 = 33;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
