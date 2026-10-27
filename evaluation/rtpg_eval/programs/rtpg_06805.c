int test_func(void) {
    int v0 = 24;
    int v1 = 48;
    int v2 = 55;
    int v3 = 44;
    int v4 = 27;
    int v5 = 83;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 + v2;
    return v0;
}
int main(void) { return test_func(); }
