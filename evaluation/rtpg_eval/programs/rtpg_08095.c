int test_func(void) {
    int v0 = 49;
    int v1 = 20;
    int v2 = 22;
    int v3 = 48;
    int v4 = 4;
    int i;
    v0 = v0 + v2;
    v1 = v1 - v4;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
