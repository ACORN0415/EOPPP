int test_func(void) {
    int v0 = 17;
    int v1 = 13;
    int v2 = 9;
    int v3 = 87;
    int v4 = 94;
    int v5 = 2;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
