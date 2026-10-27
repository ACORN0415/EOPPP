int test_func(void) {
    int v0 = 29;
    int v1 = 43;
    int v2 = 86;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v0;
    }
    v1 = 100;
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }
