int test_func(void) {
    int v0 = 94;
    int v1 = 87;
    int v2 = 73;
    int v3 = 39;
    int v4 = 49;
    int i;
    v3 = v3 - v0;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 + v4;
    return v0;
}
int main(void) { return test_func(); }
