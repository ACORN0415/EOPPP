int test_func(void) {
    int v0 = 32;
    int v1 = 98;
    int v2 = 76;
    int v3 = 17;
    int v4 = 66;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    v0 = 66;
    return v0;
}
int main(void) { return test_func(); }
