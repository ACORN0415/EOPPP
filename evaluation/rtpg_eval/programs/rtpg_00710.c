int test_func(void) {
    int v0 = 20;
    int v1 = 79;
    int v2 = 49;
    int i;
    v0 = v0 + v0;
    v0 = 55;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
