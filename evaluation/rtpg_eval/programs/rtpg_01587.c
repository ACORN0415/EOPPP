int test_func(void) {
    int v0 = 9;
    int v1 = 54;
    int v2 = 94;
    int v3 = 28;
    int v4 = 53;
    int i;
    v4 = v4 + v0;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
