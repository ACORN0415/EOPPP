int test_func(void) {
    int v0 = 79;
    int v1 = 41;
    int v2 = 33;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v0;
    }
    v2 = 16;
    return v0;
}
int main(void) { return test_func(); }
