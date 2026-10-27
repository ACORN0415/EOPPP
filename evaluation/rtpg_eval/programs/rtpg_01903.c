int test_func(void) {
    int v0 = 54;
    int v1 = 97;
    int v2 = 6;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v0;
    }
    v0 = 51;
    return v0;
}
int main(void) { return test_func(); }
