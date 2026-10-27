int test_func(void) {
    int v0 = 92;
    int v1 = 39;
    int v2 = 16;
    int v3 = 27;
    int v4 = 52;
    int i;
    v2 = v2 - v4;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
