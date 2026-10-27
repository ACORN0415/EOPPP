int test_func(void) {
    int v0 = 83;
    int v1 = 94;
    int v2 = 2;
    int v3 = 41;
    int v4 = 39;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
