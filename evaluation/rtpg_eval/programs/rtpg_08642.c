int test_func(void) {
    int v0 = 76;
    int v1 = 76;
    int v2 = 66;
    int v3 = 81;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v2;
    }
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
