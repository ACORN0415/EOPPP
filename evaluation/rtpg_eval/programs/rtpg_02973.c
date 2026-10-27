int test_func(void) {
    int v0 = 18;
    int v1 = 66;
    int v2 = 75;
    int v3 = 29;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
