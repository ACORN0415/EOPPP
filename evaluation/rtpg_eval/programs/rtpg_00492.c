int test_func(void) {
    int v0 = 25;
    int v1 = 46;
    int v2 = 39;
    int v3 = 66;
    int v4 = 29;
    int v5 = 36;
    int v6 = 44;
    int i;
    v1 = 42;
    v1 = v1 - v6;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
