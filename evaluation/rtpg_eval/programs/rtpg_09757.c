int test_func(void) {
    int v0 = 1;
    int v1 = 4;
    int v2 = 24;
    int v3 = 40;
    int v4 = 22;
    int i;
    v3 = v3 - v4;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v4;
    }
    v1 = v1 + v3;
    return v0;
}
int main(void) { return test_func(); }
