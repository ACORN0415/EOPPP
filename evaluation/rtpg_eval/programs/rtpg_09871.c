int test_func(void) {
    int v0 = 67;
    int v1 = 68;
    int v2 = 46;
    int v3 = 12;
    int v4 = 72;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v4;
    }
    v2 = v2 - v4;
    return v0;
}
int main(void) { return test_func(); }
