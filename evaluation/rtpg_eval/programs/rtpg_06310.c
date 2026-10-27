int test_func(void) {
    int v0 = 61;
    int v1 = 0;
    int v2 = 34;
    int v3 = 20;
    int v4 = 20;
    int i;
    v3 = v3 + v1;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v1;
    }
    v2 = 35;
    return v0;
}
int main(void) { return test_func(); }
