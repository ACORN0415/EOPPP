int test_func(void) {
    int v0 = 54;
    int v1 = 20;
    int v2 = 3;
    int i;
    v2 = v2 - v0;
    v2 = v2 + v2;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    v1 = 61;
    return v0;
}
int main(void) { return test_func(); }
