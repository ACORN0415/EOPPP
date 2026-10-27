int test_func(void) {
    int v0 = 67;
    int v1 = 73;
    int v2 = 34;
    int v3 = 39;
    int i;
    v3 = 61;
    v3 = v3 - v2;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
