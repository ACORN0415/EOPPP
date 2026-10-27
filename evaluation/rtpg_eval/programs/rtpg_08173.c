int test_func(void) {
    int v0 = 54;
    int v1 = 76;
    int v2 = 27;
    int i;
    v0 = 51;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
